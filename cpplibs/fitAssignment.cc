#include "PhysicsTools/KinFitter/interface/TAbsFitParticle.h"
#include "PhysicsTools/KinFitter/interface/TFitConstraintM.h"
#include "PhysicsTools/KinFitter/interface/TFitParticleEtEtaPhi.h"
#include "PhysicsTools/KinFitter/interface/TKinFitter.h"
#include "TopMass/TopEventTree/interface/JetEvent.h"
#include "TopMass/TopEventTree/interface/TopEvent.h"
#include "kinFit.h"
#include <TDecompLU.h>
#include <TFile.h>
#include <TLorentzVector.h>
#include <TMatrixD.h>
#include <TString.h>
#include <TTree.h>
#include <functional>
#include <iostream>
#include <map>
using ROOT::Math::VectorUtil::DeltaR;
using namespace std;
void tryCombinations(TLorentzVector *B1, TLorentzVector *B2, TLorentzVector *J1, TLorentzVector *J2, TLorentzVector *J3, TLorentzVector *J4, JetEvent *jetevent, TopEvent *topevent, TMatrixD mB1, TMatrixD mB2, TMatrixD mJ1, TMatrixD mJ2, TMatrixD mJ3, TMatrixD mJ4, struct Selection &bestSelection, double dRLimit, TString option) {

    applyKinFit({B1, B2, J1, J2, J3, J4}, jetevent, topevent, {mB1, mB2, mJ1, mJ2, mJ3, mJ4}, bestSelection, dRLimit, option);
    applyKinFit({B1, B2, J1, J3, J2, J4}, jetevent, topevent, {mB1, mB2, mJ1, mJ3, mJ2, mJ4}, bestSelection, dRLimit, option);
    applyKinFit({B1, B2, J1, J4, J2, J3}, jetevent, topevent, {mB1, mB2, mJ1, mJ4, mJ2, mJ3}, bestSelection, dRLimit, option);
    applyKinFit({B1, B2, J3, J4, J1, J2}, jetevent, topevent, {mB1, mB2, mJ3, mJ4, mJ1, mJ2}, bestSelection, dRLimit, option);
    applyKinFit({B1, B2, J2, J4, J1, J3}, jetevent, topevent, {mB1, mB2, mJ2, mJ4, mJ1, mJ3}, bestSelection, dRLimit, option);
    applyKinFit({B1, B2, J2, J3, J1, J4}, jetevent, topevent, {mB1, mB2, mJ2, mJ3, mJ1, mJ4}, bestSelection, dRLimit, option);
}
void setbestcombi(TString input, TString output, double dRLimit, TString option) {

    auto fIn = TFile::Open(input);
    auto tIn = dynamic_cast<TTree *>(fIn->Get("analyzeKinFit/eventTree"));
    if (tIn == nullptr)
	tIn = dynamic_cast<TTree *>(fIn->Get("eventTree"));
    auto fOut = TFile::Open(output, "RECREATE");
    auto tOut = tIn->CloneTree(0);
    // set branch adress of branch "top" to adress of topevent

    TopEvent *topevent = nullptr;
    tIn->SetBranchAddress("top.", &topevent);
    JetEvent *jetevent = nullptr;
    int N_skipped = 0;
    tIn->SetBranchAddress("jet.", &jetevent);
    int N = tIn->GetEntries();
    // loop over all Events
    for (int i = 0; i < N; i++) {
		//cout << "Entry # " << i << "/" << N << endl;
	tIn->GetEntry(i);
	struct Selection bestSelection;
	if (!(topevent->fitChi2.empty()))
	    bestSelection.chi2 = topevent->fitChi2.front();
	else
	    bestSelection.chi2 = 10000;
	int N_permutations = 0;
	vector<TLorentzVector *> jets;

	multimap<double, TLorentzVector *, greater<double>> btags;
	for (size_t i = 0; i < jetevent->jet.size(); i++) {
	    TLorentzVector *jet = &(jetevent->jet[i]);
	    double btag = jetevent->bTagCSV[i];
	    jets.push_back(jet);
	    btags.insert({btag, jet});
	}
	// sort jets by Pt and only take the 6 with highest Pt
	sort(jets.begin(), jets.end(), [](TLorentzVector *&a, TLorentzVector *&b) {
	    return a->Pt() > b->Pt();
	});

	//	jets.resize(6);

	for (pair<double, TLorentzVector *> entry : btags) {
	    bool hipt = false;
	    for (auto it = jets.begin() ; it != jets.begin() + 6 ; it++) {
		if (entry.second != *it) continue;
		hipt = true;
		break;
	    }
	    if (!hipt) {
		btags.erase(entry.first);
	    }
	}

	/*	cout << "Previous Chi2:  " << topevent->fitChi2.front();
	cout << " Previous Selection " << topevent->recoB1.front().Pt() << " "
	     << topevent->recoB2.front().Pt() << " "
	     << topevent->recoW1Prod1.front().Pt() << " "
	     << topevent->recoW1Prod2.front().Pt() << " "
	     << topevent->recoW2Prod1.front().Pt() << " "
	     << topevent->recoW2Prod2.front().Pt() << endl;
		 */
	// try all 6 physical combinations of jets
	auto it = btags.begin();
	TLorentzVector *B1 = it->second;
	jets.erase(std::find(jets.begin(), jets.end(), B1));
	it++;
	TLorentzVector *B2 = it->second;
	jets.erase(std::find(jets.begin(), jets.end(), B2));

/*	it++;
	TLorentzVector *J1 = it->second;
	it++;
	TLorentzVector *J2 = it->second;
	it++;
	TLorentzVector *J3 = it->second;
	it++;
	TLorentzVector *J4 = it->second;
*/	
	TLorentzVector* J1 = jets[0];
	TLorentzVector* J2 = jets[1];
	TLorentzVector* J3 = jets[2];
	TLorentzVector* J4 = jets[3];
	TLorentzVector* J5 = 0;
	TMatrixD mJ5(3,3);
	if(jets.size() > 4){
		 J5 = jets[4];
	mJ5 = setupMatrix(J5, false);
	}

	TLorentzVector* J6 = nullptr;
	TMatrixD mJ6(3,3);
	if(jets.size() > 5){
		J6 = jets[5];
		mJ6 = setupMatrix(J6,false);
	}
	
	if (DeltaR(*B1, *B2) <= 2) {
	    continue;
	}
	/*	
topevent->recoB1.clear();
topevent->recoB2.clear();
topevent->recoW1Prod1.clear();
topevent->recoW1Prod2.clear();
topevent->recoW2Prod1.clear();
topevent->recoW2Prod2.clear();

topevent->fitB1.clear();
topevent->fitB2.clear();
topevent->fitW1Prod1.clear();
topevent->fitW1Prod2.clear();
topevent->fitW2Prod1.clear();
topevent->fitW2Prod2.clear();

topevent->fitW1.clear();
topevent->fitW2.clear();
topevent->fitTop1.clear();
topevent->fitTop2.clear();
topevent->fitTTBar.clear();	
*/
	bool skip = false;
	for (auto je : {B1, B2, J1, J2, J3, J4}) {
	    if (je->Pt() <= 0) {
		skip = true;
		N_skipped++;
		break;
	    }
	}

	if (skip)
	    continue;

	TMatrixD mB1 = setupMatrix(B1, true);
	TMatrixD mB2 = setupMatrix(B2, true);
	TMatrixD mJ1 = setupMatrix(J1, false);
	TMatrixD mJ2 = setupMatrix(J2, false);
	TMatrixD mJ3 = setupMatrix(J3, false);
	TMatrixD mJ4 = setupMatrix(J4, false);

	tryCombinations(B1, B2, J1, J2, J3, J4, jetevent, topevent, mB1, mB2, mJ1, mJ2, mJ3, mJ4, bestSelection, dRLimit, option);
/*	
	if (jets.size() > 4) {
	tryCombinations(B1, B2, J5, J2, J3, J4, jetevent,  topevent,  mB1,  mB2,  mJ5,  mJ2,  mJ3,  mJ4, bestSelection, dRLimit, option);
	tryCombinations(B1, B2, J1, J5, J3, J4, jetevent,  topevent,  mB1,  mB2,  mJ1,  mJ5,  mJ3,  mJ4, bestSelection, dRLimit, option);
	tryCombinations(B1, B2, J1, J2, J5, J4, jetevent,  topevent,  mB1,  mB2,  mJ1,  mJ2,  mJ5,  mJ4, bestSelection, dRLimit, option);
	tryCombinations(B1, B2, J1, J2, J3, J5, jetevent,  topevent,  mB1,  mB2,  mJ1,  mJ2,  mJ3,  mJ5, bestSelection, dRLimit, option);
	}
*/	
		if (!(topevent->recoB1.empty() || topevent->fitW2Prod2.empty() ||
	    topevent->fitW2Prod1.empty() || topevent->fitW1Prod2.empty() ||
	    topevent->fitW1Prod1.empty() || topevent->fitB2.empty() ||
	    topevent->fitB1.empty() || topevent->recoW2Prod2.empty() ||
	    topevent->recoW2Prod1.empty() || topevent->recoW1Prod2.empty() ||
	    topevent->recoW1Prod1.empty() || topevent->recoB2.empty())){
	    


 vector<TLorentzVector *> genJets;
    vector<TLorentzVector *> Jets;
	Jets.push_back(&(topevent->recoB1.front()));
	Jets.push_back(&(topevent->recoB2.front()));
	Jets.push_back(&(topevent->recoW1Prod1.front()));
	Jets.push_back(&(topevent->recoW1Prod2.front()));
	Jets.push_back(&(topevent->recoW2Prod1.front()));
	Jets.push_back(&(topevent->recoW2Prod2.front()));
    for (size_t ip = 0; ip < jetevent->genParton.size(); ip++)
	genJets.push_back(&(jetevent->genParton[ip]));
    //check if the selection is correct with gen Information
    topevent->combinationType.clear();
    topevent->combinationType.resize(1);
    if (option == "ambiguous") {
	if (allmatch(genJets, Jets)) {
	    topevent->combinationType[0] = 1;
	} else {
	    topevent->combinationType[0] = 0;
	}
    } else if (option == "unambiguous") {
	if (allmatchunambiguous(genJets, Jets,topevent)) {
	    topevent->combinationType[0] = 1;
	} else {
	    topevent->combinationType[0] = 0;
	}
    }
		}
		else{
	
    topevent->combinationType.clear();
		}
	//	mB1.Print();
	//	mB2.Print();
	//	mJ1.Print();
	//	mJ2.Print();
	//	mJ3.Print();
	//	mJ4.Print();

	/*
	cout << "Best Comb Chi2: " << bestSelection.chi2;
	cout << " Best Selection Pt  ";
	for (TLorentzVector *bestjet : bestSelection.bestPermutation) {
	    cout << bestjet->Pt() << " ";
	}
	cout << endl;
*/
	tOut->Fill();
    }
    //	cout << "Skipped Events : " << N_skipped << "/ " << N << endl;

    tOut->Write();
    fOut->Close();
}
int main(int argc, char *argv[]) {

    TString input = argv[1];
    TString output = argv[2];
    double dRLimit = stod(argv[3]);
    TString option = argv[4];

    setbestcombi(input, output, dRLimit, option);

    return 0;
}
