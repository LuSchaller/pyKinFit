#include <iostream>
#include <vector>
#include <array>
#include <cassert>

#include <unistd.h>
#include "PhysicsTools/KinFitter/interface/TFitConstraintM.h"
#include "PhysicsTools/KinFitter/interface/TAbsFitParticle.h"
#include "PhysicsTools/KinFitter/interface/TFitParticleEtEtaPhi.h"
#include "PhysicsTools/KinFitter/interface/TKinFitter.h"
#include "TopMass/TopEventTree/interface/TopEvent.h"
#include "TopMass/TopEventTree/interface/JetEvent.h"
#include "addExtraJets.h"

#include <TString.h>
#include <TFile.h>
#include <TTree.h>
#include <TLorentzVector.h>
#include <TH1F.h>

using namespace std;

// for the calculation of the covariance matrix the following config file is used:
#include "config.h"


////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
// first try to run TKinFitter for one example full hadronic event
// fits all events in dataset (B1,B2,W1Prod1/2,W2Prod1/2 for each event)
// needs input root file like "job_42analyzeTop.root"
// output of same structure as input, only fitted values are changed
// now also adds pull plots for all variables
// To run in console: appylTestKinFit input.root output.root
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////


// structure to fill pull histograms -> inspired by getHistograms
struct particleHists {
	
	// class includes the histograms which should be created and name of particle	
	TString name;
	TString prefix;
	TH1 * et; TH1 * eta; TH1 * phi;

	// default constructor (necessary to initialize array )
	particleHists():name(""),prefix(""),et(nullptr),eta(nullptr),phi(nullptr){}

	// constructor initializes name and histograms	
	particleHists( TString Name, TString Prefix): name(Name), prefix(Prefix),
	et(new TH1F(prefix + name + "Et",";#frac{E_{T}^{reco}-E_{T}^{fit}}{#sigma};N",300,-3,3)),
	eta(new TH1F(prefix + name + "Eta",";#frac{#eta^{reco}-#eta^{fit}}{#sigma};N",300,-3,3)),
	phi(new TH1F(prefix + name + "Phi",";#frac{#phi^{reco}-#phi^{fit}}{#sigma};N",300,-3,3))
	{}

	// fills histograms with according values from a given reco, fit and fiterror
	void Fill(const TLorentzVector& reco, const TLorentzVector& fit,double siget,double sigeta,double sigphi){
		// assert(siget > 0);
		// assert(sigeta > 0);
		// assert(sigphi > 0);
		if(!(siget > 0))return;
		double Etreco = reco.E()*std::fabs(sin(reco.Theta()));
		double Etfit = fit.E()*std::fabs(sin(fit.Theta()));
		et->Fill((Etreco-Etfit)/siget);
		eta->Fill((reco.Eta()-fit.Eta())/sigeta);
		phi->Fill((reco.Phi()-fit.Phi())/sigphi);
	}

	// writes the histograms in a given directory
	void Write(TDirectory * file){
		TDirectory * dPart = file->mkdir(name);
		dPart->cd();
		for (TH1 * h : {et,eta,phi}){
			TString n = h->GetName();
			n.ReplaceAll(prefix + name,"");
			h->SetDirectory(dPart);
			h->Write(n);		
		}
				
	}

};


// function to calculate the covariance matrix of the fit, requires functions
// definded in config.h
TMatrixD setupMatrix(const TLorentzVector* object, bool isB){
	TMatrixD CovM (3,3);
	CovM.Zero();
	const double et = object->E()*std::fabs(sin(object->Theta())); 
	const double eta = object->Eta();
	CovM(0,0) = pow(CalcEt(et, eta, isB),2);
	CovM(0,0)*= pow(getEtaDependentScaleFactor(*object),2);
	CovM(1,1) = pow(CalcEta(et, eta, isB),2);
	CovM(2,2) = pow(CalcPhi(et, eta, isB),2);
	return CovM;
}
// now overloaded to account for adding Jets
TMatrixD setupMatrix(const TLorentzVector* object1, const TLorentzVector* object2, bool isB){
	TMatrixD CovM (3,3);
	CovM.Zero();
	const double et1 = object1->E()*std::fabs(sin(object1->Theta())); 
	const double eta1 = object1->Eta();
	const double et2 = object2->E()*std::fabs(sin(object2->Theta())); 
	const double eta2 = object2->Eta();

 	CovM(0,0) = pow(CalcEt(et1, eta1, isB) * getEtaDependentScaleFactor(*object1),2)
	          + pow(CalcEt(et2, eta2, isB)* getEtaDependentScaleFactor(*object2),2);
	CovM(1,1) = pow(CalcEta(et1, eta1, isB),2)+pow(CalcEta(et2,eta2,isB),2);
	CovM(2,2) = pow(CalcPhi(et1, eta1, isB),2)+pow(CalcPhi(et2,eta2,isB),2);
	return CovM;
}

// function to Print TLorentzVectors with 3 digit precision
void PrintTvec(TLorentzVector Tvec){
	double pt = Tvec.Pt();
	double eta = Tvec.Eta();
	double phi = Tvec.Phi();
	double e = Tvec.E();
	double m = Tvec.M();
	cout << "(Pt, eta, phi, E, M) = (" << round(10*pt)/10 << ", " << round(100*eta)/100 << ", " << round(100*phi)/100 << ", " << round(e) << ", " << round(10*m)/10 << ")" << endl;
}


// function printing all TLorentzVectors for one TopEvent (RECO & FIT)
void PrintTopEvent(TopEvent * topevent){
	if(topevent->recoB1.empty() || topevent->fitW2Prod2.empty() || topevent->fitW2Prod1.empty() || topevent->fitW1Prod2.empty() || topevent->fitW1Prod1.empty() || topevent->fitB2.empty() || topevent->fitB1.empty() || topevent->recoW2Prod2.empty() || topevent->recoW2Prod1.empty() || topevent->recoW1Prod2.empty() || topevent->recoW1Prod1.empty() || topevent->recoB2.empty()){
		cout << "Empty Entry." << endl;
		return;
	}
	cout << "RECO:" << endl;
	cout << "TTBar: ";PrintTvec(topevent->recoTTBar.front());
	cout << "Top1: ";PrintTvec(topevent->recoTop1.front());
	cout << "Top2: ";PrintTvec(topevent->recoTop2.front());
	cout << "W1: ";PrintTvec(topevent->recoW1.front());
	cout << "W2: ";PrintTvec(topevent->recoW2.front());
	cout << "B1: ";PrintTvec(topevent->recoB1.front());
	cout << "B2: ";PrintTvec(topevent->recoB2.front());
	cout << "W1Prod1: ";PrintTvec(topevent->recoW1Prod1.front());
	cout << "W1Prod2: " ;PrintTvec(topevent->recoW1Prod2.front());
	cout << "W2Prod1: ";PrintTvec(topevent->recoW2Prod1.front());
	cout << "W2Prod2: ";PrintTvec(topevent->recoW2Prod2.front());
	cout << endl << "FIT:" << endl;	
	cout << "TTBar: ";PrintTvec(topevent->fitTTBar.front());
	cout << "Top1: ";PrintTvec(topevent->fitTop1.front());
	cout << "Top2: ";PrintTvec(topevent->fitTop2.front());
	cout << "W1: ";PrintTvec(topevent->fitW1.front());
	cout << "W2: ";PrintTvec(topevent->fitW2.front());
	cout << "B1: ";PrintTvec(topevent->fitB1.front());
	cout << "B2: ";PrintTvec(topevent->fitB2.front());
	cout << "W1Prod1: ";PrintTvec(topevent->fitW1Prod1.front());
	cout << "W1Prod2: ";PrintTvec(topevent->fitW1Prod2.front());
	cout << "W2Prod1: ";PrintTvec(topevent->fitW2Prod1.front());
	cout << "W2Prod2: ";PrintTvec(topevent->fitW2Prod2.front());
}


// Comment on the dataset:
// - the 4-vectors of each particle i.e recoB1 are saved in a std::vector<TLorentzVector>
// - usually these vecotrs contain exactly 1 TLorentzVector
// - BUT some vectors are empty
// -> Therefor these entries have to be left out, else this causes problems


void applyTestKinFit(TString input, TString output, double dRLimit)
{

// Open TFile and open the correct branch of the TTree
auto fIn = TFile::Open(input);
auto tIn = dynamic_cast<TTree*>(fIn->Get("analyzeKinFit/eventTree"));
if (tIn==nullptr) tIn = dynamic_cast<TTree*>(fIn->Get("eventTree"));

// set branch adress of branch "top" to adress of topevent 
TopEvent * topevent = nullptr;
tIn->SetBranchAddress("top.", &topevent);
JetEvent * jetevent = nullptr;
tIn->SetBranchAddress("jet.",&jetevent);

auto fOut = TFile::Open(output, "RECREATE"); 
auto tOut = tIn->CloneTree(0);

// some variables to check fit performance
int N = tIn->GetEntries(); // total number of entries
int N_empty = 0; //number of empty entries
int N_full = 0; //number of not empty entries 
int N_converged = 0; //number of converged fits
int n_counter = 0; //counter for the average number of iterations (sum off n_iter for all fits)

// vecotor for the names of partiles
const vector<TString> v_names={"B1", "B2", "W1Prod1", "W1Prod2", "W2Prod1", "W2Prod2"};
const int n = v_names.size();

// Histograms for pull-variables p_v:= (v_r-v_f)/sig_{v_f}
particleHists a_histsPullRefit[n];
particleHists a_histsPullFit[n];
// histograms for pull-variables for the correct selection (topevent->combinationType==1)
particleHists a_histsPullRefitCorr[n];
particleHists a_histsPullFitCorr[n];
for( int i = 0; i < n; i++){
	a_histsPullRefit[i] = particleHists(v_names[i],"Refit");	 
	a_histsPullFit[i] = particleHists(v_names[i],"Fit");	 
	a_histsPullRefitCorr[i] = particleHists(v_names[i],"RefitCorr");	 
	a_histsPullFitCorr[i] = particleHists(v_names[i],"FitCorr");	 
}

// Loop over all entries and perform fit
for(int i=0; i<N; i++){

	tIn->GetEntry(i);
	
	// first only look at none empty entries:
	if(topevent->recoB1.empty() || topevent->fitW2Prod2.empty() || topevent->fitW2Prod1.empty() || topevent->fitW1Prod2.empty() || topevent->fitW1Prod1.empty() || topevent->fitB2.empty() || topevent->fitB1.empty() || topevent->recoW2Prod2.empty() || topevent->recoW2Prod1.empty() || topevent->recoW1Prod2.empty() || topevent->recoW1Prod1.empty() || topevent->recoB2.empty()){
	N_empty++;
	} 

	else{
	N_full++;
	// create new TKinFitter
	TKinFitter * fitter_ = new TKinFitter("TopKinFitter","TopKinFitter");
	fitter_->setMaxNbIter(200);
	fitter_->setMaxDeltaS(5e-5);
	fitter_->setMaxF(1e-4);
	fitter_->setVerbosity(0);
	
	// extract TLorentzVectors from vectors
	TLorentzVector* recoB1      = &topevent->recoB1.front();
	TLorentzVector* recoB2      = &topevent->recoB2.front();
	TLorentzVector* recoW1Prod1 = &topevent->recoW1Prod1.front();
	TLorentzVector* recoW1Prod2 = &topevent->recoW1Prod2.front();
	TLorentzVector* recoW2Prod1 = &topevent->recoW2Prod1.front();
	TLorentzVector* recoW2Prod2 = &topevent->recoW2Prod2.front();

std::map< TLorentzVector*, TMatrixD > decayprodmats;
	// definiton of covariance matrices 
	decayprodmats.insert({recoB1     , setupMatrix(recoB1     , true )});
	decayprodmats.insert({recoB2     , setupMatrix(recoB2     , true )});
	decayprodmats.insert({recoW1Prod1, setupMatrix(recoW1Prod1, false)});
	decayprodmats.insert({recoW1Prod2, setupMatrix(recoW1Prod2, false)});
	decayprodmats.insert({recoW2Prod1, setupMatrix(recoW2Prod1, false)});
	decayprodmats.insert({recoW2Prod2, setupMatrix(recoW2Prod2, false)});
for (unsigned int j = 0; j < jetevent->jet.size(); j++) {
		TLorentzVector &jet = jetevent->jet.at(j);
		bool matched = false;
		for (const auto &decayprod : decayprodmats){
			if (abs((jet.Pt()) - decayprod.first->Pt()) > 0.0001)
			continue;
			matched = true;
			break;
		}	
		if (matched) continue;
		TLorentzVector* closestdecayprodvecptr=0;
		//cout << "New Jet :" <<closestdecayprodvecptr->Pt() << endl;
		bool hasclosestdecayprod = addExtraJets(jet, {recoB1,recoB2,recoW1Prod1,recoW1Prod2,recoW2Prod1,recoW2Prod2}, dRLimit, closestdecayprodvecptr);	
		if(hasclosestdecayprod){
		//	cout << "PreAdd" <<closestdecayprodvecptr->Pt()<< endl;
		bool btag = false;
		if(closestdecayprodvecptr==recoB1 || closestdecayprodvecptr==recoB2)
		btag=true;
//		auto e = closestdecayprodvecptr->E();
//		TLorentzVector* closestdecayprodvecptr = &closestdecayprodvec;
		decayprodmats.at(closestdecayprodvecptr) = setupMatrix(closestdecayprodvecptr,&jet, btag);
		cout << jet.E()<< " " <<closestdecayprodvecptr->E()<<" "<< jet.E() + closestdecayprodvecptr->E()<< endl;
		*closestdecayprodvecptr += jet;
		cout << closestdecayprodvecptr->E()<<endl;
		cout << recoB1->E() << endl;
//		auto e2 = closestdecayprodvecptr->E();
//		cout << "Pre: " << e << " Post: " <<e2 << endl;
		//cout << "Post add" <<closestdecayprodvecptr->Pt()<<endl;
}

}
TMatrixD mB1 = decayprodmats[recoB1];
TMatrixD mB2 = decayprodmats[recoB2];
TMatrixD mW1P1 = decayprodmats[recoW1Prod1];
TMatrixD mW1P2 = decayprodmats[recoW1Prod2];
TMatrixD mW2P1 = decayprodmats[recoW2Prod2];
TMatrixD mW2P2 = decayprodmats[recoW2Prod2];
	// setup jets and add to fitter_
	auto B1         = new TFitParticleEtEtaPhi("B1"	, "B1"	      , recoB1, &mB1);
	auto B2 	= new TFitParticleEtEtaPhi("B2"	, "B2"     , recoB2, &mB2);
	auto W1Prod1 	= new TFitParticleEtEtaPhi("W1Prod1"	, "W1Prod1 "  , recoW1Prod1, &mW1P1);
	auto W1Prod2 = new TFitParticleEtEtaPhi("W1Prod2", "W1Prod2", recoW1Prod2, &mW1P2);
	auto W2Prod1 	= new TFitParticleEtEtaPhi("W2Prod1"	, "W2Prod1 "  , recoW2Prod1, &mW2P1);
	auto W2Prod2 = new TFitParticleEtEtaPhi("W2Prod2", "W2Prod2", recoW2Prod2, &mW2P2);

	for (auto p: {B1, B2, W1Prod1, W1Prod2, W2Prod1, W2Prod2})
		fitter_->addMeasParticle(p);
	
	// set constants:
	double mW_ = 80.4;
	
	// set up constraints and add to fitter_
	auto kW1Mass      = new TFitConstraintM("W1Mass"     , "W1Mass"      , 0 , 0 , mW_   );
	auto kW2Mass     = new TFitConstraintM("W2Mass"    , "W2Mass"     , 0 , 0 , mW_   );
	auto kEqualTopMasses = new TFitConstraintM("EqualTopMasses", "EqualTopMasses" , 0 , 0 , 0     );
	
	// add particles/jets to constraints
	kW1Mass     ->addParticles1(W1Prod1, W1Prod2);
	kW2Mass    ->addParticles1(W2Prod1, W2Prod2);
	kEqualTopMasses->addParticles1(B1, W1Prod1, W1Prod2);
	kEqualTopMasses->addParticles2(B2, W2Prod1, W2Prod2);
	
	for (auto c: { kW1Mass, kW2Mass, kEqualTopMasses})
		fitter_->addConstraint(c);
	
	// perform fit
	fitter_->fit();

// ourfit has the newly fitted TLorentzvectors of the particles as entries, the order is the same
// order the particles have been added to the fitter (B1,B2, W1Prod1, W1Prod2, W2Prod1, W2Prod2)

// overwrite the values in top.fit* branch and fill pull histograms
	{
		TLorentzVector *fitTTBar =& topevent->fitTTBar.front();
		TLorentzVector *fitTop1 =& topevent->fitTop1.front();
		TLorentzVector *fitTop2 =& topevent->fitTop2.front();
		TLorentzVector *fitW1 =& topevent->fitW1.front();
		TLorentzVector *fitW2 =& topevent->fitW2.front();
		TLorentzVector *fitB1 =& topevent->fitB1.front();
		TLorentzVector *fitB2 =& topevent->fitB2.front();
		TLorentzVector *fitW1Prod1 =& topevent->fitW1Prod1.front();
		TLorentzVector *fitW1Prod2 =& topevent->fitW1Prod2.front();
		TLorentzVector *fitW2Prod1 =& topevent->fitW2Prod1.front();
		TLorentzVector *fitW2Prod2 =& topevent->fitW2Prod2.front();

		// fill all pull histograms for Fit
		TLorentzVector* a_fit[n] = {fitB1,fitB2,fitW1Prod1,fitW1Prod2,fitW2Prod1,fitW2Prod2};
		TLorentzVector* a_reco[n] = {recoB1,recoB2,recoW1Prod1,recoW1Prod2,recoW2Prod1,recoW2Prod2};
		TMatrixD covMat = *(fitter_->getCovMatrixFit());

		for (int i =0; i<n; i++){
			double siget = TMath::Sqrt(covMat[3*i][3*i]);
			double sigeta = TMath::Sqrt(covMat[3*i+1][3*i+1]);
			double sigphi = TMath::Sqrt(covMat[3*i+2][3*i+2]);
			a_histsPullFit[i].Fill(*a_reco[i],*a_fit[i],siget,sigeta,sigphi);	
			if(!(topevent->combinationType.empty()) && topevent->combinationType.front() == 1){
				a_histsPullFitCorr[i].Fill(*a_reco[i],*a_fit[i],siget,sigeta,sigphi);
			}
		}

		// overwrite all fit TLorentzvectors
		*fitB1 =      *(fitter_->get4Vec(0));
		*fitB2 =      *(fitter_->get4Vec(1));
		*fitW1Prod1 = *(fitter_->get4Vec(2));
		*fitW1Prod2 = *(fitter_->get4Vec(3));
		*fitW2Prod1 = *(fitter_->get4Vec(4));
		*fitW2Prod2 = *(fitter_->get4Vec(5));
		*fitW1 = *fitW1Prod1 + *fitW1Prod2;
		*fitW2 = *fitW2Prod1 + *fitW2Prod2;
		*fitTop1 = *fitB1 + *fitW1;
		*fitTop2 = *fitB2 + *fitW2;
		*fitTTBar = *fitTop1 + *fitTop2; 

		// fill all pull histograms for Refit
		TLorentzVector* a_refit[n] = {fitB1,fitB2,fitW1Prod1,fitW1Prod2,fitW2Prod1,fitW2Prod2};
		for (int i =0; i<n; i++){
			double siget = TMath::Sqrt(covMat[3*i][3*i]);
			double sigeta = TMath::Sqrt(covMat[3*i+1][3*i+1]);
			double sigphi = TMath::Sqrt(covMat[3*i+2][3*i+2]);
			a_histsPullRefit[i].Fill(*a_reco[i],*a_refit[i],siget,sigeta,sigphi);	
			if(!(topevent->combinationType.empty()) && topevent->combinationType.front() == 1){
				a_histsPullRefitCorr[i].Fill(*a_reco[i],*a_refit[i],siget,sigeta,sigphi);
			}
		}

		// overwrite fitChi2 and fitProb
		topevent->fitChi2.front() = fitter_->getS();
		topevent->fitProb.front() = TMath::Prob(fitter_->getS(),fitter_->getNDF()); 

	}

	if( fitter_->getStatus() == 0){
		N_converged++;
		n_counter+=fitter_->getNbIter();

		/*static bool printEntry = true;
		if (printEntry) {
			// Print Vectors for first converged Event (reco & refit) 
			PrintTopEvent(topevent);	
			cout << endl << "Entry: " << i << endl;
			printEntry = false;
			cout << endl << "Combination type: " << topevent->combinationType.front();
		}*/
	}

	delete fitter_;

	}
	tOut->Fill();
}


cout << endl << endl << "General Info:" << endl;
cout << "Total number of empty entries: " << N_empty << endl;
cout << "Total number converged: " << N_converged << endl;
cout << "Total number of non empty entries: " << N_full << endl;
cout << "Total number of entries: " << N << endl;
float n_avg = ((float)n_counter/N_converged);
cout << "Average number of iterations for converged fits:" << n_avg << std::endl; 
tOut->Write();
auto dPulls = fOut->mkdir("pulls");
dPulls->cd();
auto dFit = dPulls->mkdir("Fit");
auto dRefit = dPulls->mkdir("Refit");
auto dCorrectSel = dPulls->mkdir("CorrectSelection");
for( particleHists &part : a_histsPullRefit)part.Write(dRefit);
for( particleHists &part : a_histsPullFit)part.Write(dFit);
dCorrectSel->cd();
auto dFitCorr = dCorrectSel->mkdir("Fit");
auto dRefitCorr = dCorrectSel->mkdir("Refit");
for( particleHists &part : a_histsPullRefitCorr)part.Write(dRefitCorr);
for( particleHists &part : a_histsPullFitCorr)part.Write(dFitCorr);
fOut->Close();
fIn->Close();
}


int main (int argc, char * argv[])
{
	if (argc < 3){
		cout << argv[0] << "input output" << endl;
		return 0;
	}

	TString input = argv[1];
	TString output = argv[2];
double dRLimit =atof(argv[3]);
	applyTestKinFit(input,output,dRLimit);
	return 0;
}
