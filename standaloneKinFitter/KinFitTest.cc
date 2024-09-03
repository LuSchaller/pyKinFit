#include <TLorentzVector.h>
#include <vector>
#include <TMatrixD.h>
#include <iostream>
#include <TObject.h>

#include "config.h"
#include "KinFitter/TKinFitter.h"
#include "KinFitter/TFitParticlePtEtaPhi.h"
#include "KinFitter/TFitConstraintM.h"
using std::cout;
using std::vector;
struct Selection {
    double chi2;
    vector<TLorentzVector *> bestPermutation;
    vector<TLorentzVector > fitJets;
    int combinationType;
};

TMatrixD setupMatrix(const TLorentzVector *object, bool isB) {
    TMatrixD CovM(3, 3);
    CovM.Zero();
    const double et = object->E() * std::fabs(sin(object->Theta()));
    const double eta = object->Eta();
    CovM(0, 0) = pow(CalcEt(et, eta, isB), 2);
    CovM(0, 0) *= pow(getEtaDependentScaleFactor(*object), 2);
    CovM(1, 1) = pow(CalcEta(et, eta, isB), 2);
    CovM(2, 2) = pow(CalcPhi(et, eta, isB), 2);
    return CovM;
}
// now overloaded to account for adding Jets
TMatrixD setupMatrix(const TLorentzVector *object1, const TLorentzVector *object2, bool isB) {
    TMatrixD CovM(3, 3);
    CovM.Zero();
    const double et1 = object1->E() * std::fabs(sin(object1->Theta()));
    const double eta1 = object1->Eta();
    const double et2 = object2->E() * std::fabs(sin(object2->Theta()));
    const double eta2 = object2->Eta();

    CovM(0, 0) = pow(CalcEt(et1, eta1, isB) * getEtaDependentScaleFactor(*object1), 2) + pow(CalcEt(et2, eta2, isB) * getEtaDependentScaleFactor(*object2), 2);
    CovM(1, 1) = pow(CalcEta(et1, eta1, isB), 2) + pow(CalcEta(et2, eta2, isB), 2);
    CovM(2, 2) = pow(CalcPhi(et1, eta1, isB), 2) + pow(CalcPhi(et2, eta2, isB), 2);
    return CovM;
}





void applyKinFit(vector<TLorentzVector *> jetSelection, vector<TMatrixD> decayprodmats){

    TKinFitter *fitter_ = new TKinFitter("TopKinFitter", "TopKinFitter");
    fitter_->setMaxNbIter(200);
    fitter_->setMaxDeltaS(5e-5);
    fitter_->setMaxF(1e-4);
    fitter_->setVerbosity(0);

        // definiton of covariance matrices
    TMatrixD mB1 = decayprodmats[0];
    TMatrixD mB2 = decayprodmats[1];
    TMatrixD mW1P1 = decayprodmats[2];
    TMatrixD mW1P2 = decayprodmats[3];
    TMatrixD mW2P1 = decayprodmats[4];
    TMatrixD mW2P2 = decayprodmats[5];




cout << "B1 PRE : " << jetSelection[0]->Pt();


    auto B1 = new TFitParticlePtEtaPhi("B1", "B1", jetSelection[0], &mB1);
    auto B2 = new TFitParticlePtEtaPhi("B2", "B2", jetSelection[1], &mB2);
    auto W1Prod1 = new TFitParticlePtEtaPhi("W1Prod1", "W1Prod1 " , jetSelection[2], &mW1P1);
    auto W1Prod2 = new TFitParticlePtEtaPhi("W1Prod2", "W1Prod2"  , jetSelection[3], &mW1P2);
    auto W2Prod1 = new TFitParticlePtEtaPhi("W2Prod1", "W2Prod1 " , jetSelection[4], &mW2P1);
    auto W2Prod2 = new TFitParticlePtEtaPhi("W2Prod2", "W2Prod2"  , jetSelection[5], &mW2P2);

    for (auto p : {B1, B2, W1Prod1, W1Prod2, W2Prod1, W2Prod2})
	fitter_->addMeasParticle(p);

    // set constants:
    double mW_ = 80.4;

    // set up constraints and add to fitter_
    auto kW1Mass = new TFitConstraintM("W1Mass", "W1Mass", 0, 0, mW_);
    auto kW2Mass = new TFitConstraintM("W2Mass", "W2Mass", 0, 0, mW_);
    auto kEqualTopMasses = new TFitConstraintM("EqualTopMasses", "EqualTopMasses", 0, 0, 0);

    // add particles/jetSelection to constraints
    kW1Mass->addParticles1(W1Prod1, W1Prod2);
    kW2Mass->addParticles1(W2Prod1, W2Prod2);
    kEqualTopMasses->addParticles1(B1, W1Prod1, W1Prod2);
    kEqualTopMasses->addParticles2(B2, W2Prod1, W2Prod2);

    for (auto c : {kW1Mass, kW2Mass, kEqualTopMasses})
	fitter_->addConstraint(c);
    // perform fit
    fitter_->fit();

    cout << "Chi2 " << fitter_->getS() << " " ;
      cout <<" B1 Pre: " << jetSelection[0]->Pt() << " B1 Fit: " << fitter_->get4Vec(0)->Pt() ;
      cout <<" B2 Pre: " << jetSelection[1]->Pt() << " B2 Fit: " << fitter_->get4Vec(1)->Pt() ;
   // fitter_->print();



    delete fitter_;
    for (auto p : {B1, B2, W1Prod1, W1Prod2, W2Prod1, W2Prod2})
	delete p;
    for (auto c : {kW1Mass, kW2Mass, kEqualTopMasses})
	delete c;
}


void setBestCombi(vector<vector<double>> inputdata, vector<vector<double>> gendata){
    
    vector<double> inputpt = inputdata[0];
    vector<double> inputeta = inputdata[1];
    vector<double> inputphi = inputdata[2];
    vector<double> inputM = inputdata[3];


    vector<double> genpt = gendata[0];
    vector<double> geneta = gendata[1];
    vector<double> genphi = gendata[2];
    vector<double> genM = gendata[3];


	vector<TLorentzVector *> jets;
	for (size_t i = 0; i < inputdata[0].size(); i++) {
        TLorentzVector *jet = new TLorentzVector();
        jet->SetPtEtaPhiE(inputpt[i], inputeta[i], inputphi[i], inputM[i]);
        jets.push_back(jet);
    }

 vector<TLorentzVector *> genJets;
 	for (size_t i = 0; i < gendata[0].size(); i++) {
        TLorentzVector *genjet = new TLorentzVector();
        genjet->SetPtEtaPhiM(genpt[i], geneta[i], genphi[i], genM[i]);
        genJets.push_back(genjet);
}



    TLorentzVector* B1 = jets[0];
    TLorentzVector* B2 = jets[1];
	TLorentzVector* J1 = jets[2];
	TLorentzVector* J2 = jets[3];
	TLorentzVector* J3 = jets[4];
	TLorentzVector* J4 = jets[5];

	TMatrixD mB1 = setupMatrix(B1, true);
	TMatrixD mB2 = setupMatrix(B2, true);
	TMatrixD mJ1 = setupMatrix(J1, false);
	TMatrixD mJ2 = setupMatrix(J2, false);
	TMatrixD mJ3 = setupMatrix(J3, false);
	TMatrixD mJ4 = setupMatrix(J4, false);
vector<TMatrixD> decayprodmats = {mB1,mB2,mJ1,mJ2,mJ3,mJ4};

applyKinFit(jets,decayprodmats);



for (auto p : jets)
	delete p;
for (auto d : genJets)
    delete d;


}
