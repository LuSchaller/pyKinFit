#include "TSystem.h"
#include "TopMass/TopEventTree/interface/JetEvent.h"
#include "TopMass/TopEventTree/interface/TopEvent.h"
#include "findClosestDecayProd.h"
#include <TFile.h>
#include <TLorentzVector.h>
#include <TString.h>
#include <TTree.h>
#include <cstddef>
#include <iostream>
#include <map>
#include <string>
using std::cout;
using std::min;

bool addExtraJets(TLorentzVector jet, vector<TLorentzVector*> topjets, double dRLimit,TLorentzVector* &closestdecayprodvec) {

		double minDeltaR = std::numeric_limits<double>::max();
		std::map<TString, TLorentzVector *> decayprods{
		    {"B1: ", topjets[0]},
		    {"B2: ", topjets[1]},
		    {"W1Prod1: ", topjets[2]},
		    {"W1Prod2: ", topjets[3]},
		    {"W2Prod1: ", topjets[4]},
		    {"W2Prod2: ", topjets[5]}};
		for (const auto &decayprod : decayprods) {
			double thisDeltaR = DeltaR(jet, *decayprod.second);
			minDeltaR = min(minDeltaR, thisDeltaR);
		}
vector<const TLorentzVector*> consttopjets;
for (const TLorentzVector* j :topjets ) {
consttopjets.push_back( j);
}
		if (minDeltaR < dRLimit) {
		TString	closestdecayprod = findClosestDecayProduct(jet,consttopjets);
			closestdecayprodvec = decayprods[closestdecayprod];
			return true;
			//	*closestdecayprodvec += jet;
		}
		else {
		return false;
		}
	}

