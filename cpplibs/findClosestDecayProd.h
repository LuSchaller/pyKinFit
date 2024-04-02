#include "TopMass/TopEventTree/interface/JetEvent.h"
#include "TopMass/TopEventTree/interface/TopEvent.h"
#include <TFile.h>
#include <TH1D.h>
#include <THStack.h>
#include <TLorentzVector.h>
#include <TString.h>
#include <TTree.h>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include "Math/VectorUtil.h"
using ROOT::Math::VectorUtil::DeltaR;
using std::abs;
using std::cout;
using std::endl;
using std::pow;
using std::sqrt;
using std::vector;
TString findClosestDecayProduct(TLorentzVector jetTVec, vector<const TLorentzVector*> topjets) {
	const vector<TString> v_names = {"B1: ",  "B2: ","W1Prod1: ", "W1Prod2: " , "W2Prod1: ", "W2Prod2: "};
	vector<double> deltaR;
	deltaR.push_back(DeltaR(jetTVec, *topjets[0]));
	deltaR.push_back(DeltaR(jetTVec,*topjets[1]) );
	deltaR.push_back(DeltaR(jetTVec,*topjets[2]) );
	deltaR.push_back(DeltaR(jetTVec,*topjets[3]) );
	deltaR.push_back(DeltaR(jetTVec,*topjets[4]) );
	deltaR.push_back(DeltaR(jetTVec,*topjets[5]) );
	std::vector<double>::iterator minit =
	    std::min_element(deltaR.begin(), deltaR.end());
	int minindex = std::distance(deltaR.begin(), minit);
	/*cout << "Closest Jet is " + v_names[minindex] +
		    "with DeltaRMin =" + std::to_string(deltaR.at(minindex))
	     << endl;*/
	return v_names[minindex];
}
int findClosestGenParton(TLorentzVector decayprod, JetEvent * jetevent){

vector<double> deltaR;
for(unsigned int i= 0 ; i < jetevent->genParton.size();i++){
	TLorentzVector Parton = jetevent->genParton.at(i);
	deltaR.push_back(DeltaR(decayprod, Parton));
			}
std::vector<double>::iterator minit = std::min_element(deltaR.begin(), deltaR.end());
	int minindex = std::distance(deltaR.begin(), minit);
	return minindex; 
	}
int  findClosestJetIndex(TLorentzVector jetTVec, TopEvent *topevent) {

	const vector<TString> v_names = {"B1", "W1Prod1", "W1Prod2",
					 "B2", "W2Prod1", "W2Prod2"};
	vector<double> deltaR;
	deltaR.push_back(
	    sqrt(abs(pow(jetTVec.Eta() - topevent->recoB1.front().Eta(), 2) +
		     pow(jetTVec.Phi() - topevent->recoB1.front().Phi(), 2))));
	deltaR.push_back(sqrt(
	    abs(pow(jetTVec.Eta() - topevent->recoW1Prod1.front().Eta(), 2) +
		pow(jetTVec.Phi() - topevent->recoW1Prod1.front().Phi(), 2))));
	deltaR.push_back(sqrt(
	    abs(pow(jetTVec.Eta() - topevent->recoW1Prod2.front().Eta(), 2) +
		pow(jetTVec.Phi() - topevent->recoW1Prod2.front().Phi(), 2))));
	deltaR.push_back(
	    sqrt(abs(pow(jetTVec.Eta() - topevent->recoB2.front().Eta(), 2) +
		     pow(jetTVec.Phi() - topevent->recoB2.front().Phi(), 2))));
	deltaR.push_back(sqrt(
	    abs(pow(jetTVec.Eta() - topevent->recoW2Prod1.front().Eta(), 2) +
		pow(jetTVec.Phi() - topevent->recoW2Prod1.front().Phi(), 2))));
	deltaR.push_back(sqrt(
	    abs(pow(jetTVec.Eta() - topevent->recoW2Prod2.front().Eta(), 2) +
		pow(jetTVec.Phi() - topevent->recoW2Prod2.front().Phi(), 2))));
	std::vector<double>::iterator minit =
	    std::min_element(deltaR.begin(), deltaR.end());
	int minindex = std::distance(deltaR.begin(), minit);
	/*cout << "Closest Jet is " + v_names[minindex] +
		    "with DeltaRMin =" + std::to_string(deltaR.at(minindex))
	     << endl;*/
		return minindex;
}
double  findClosestJet(TLorentzVector jetTVec, TopEvent *topevent) {

	const vector<TString> v_names = {"B1", "W1Prod1", "W1Prod2",
					 "B2", "W2Prod1", "W2Prod2"};
	vector<double> deltaR;
	deltaR.push_back(
	    sqrt(abs(pow(jetTVec.Eta() - topevent->recoB1.front().Eta(), 2) +
		     pow(jetTVec.Phi() - topevent->recoB1.front().Phi(), 2))));
	deltaR.push_back(sqrt(
	    abs(pow(jetTVec.Eta() - topevent->recoW1Prod1.front().Eta(), 2) +
		pow(jetTVec.Phi() - topevent->recoW1Prod1.front().Phi(), 2))));
	deltaR.push_back(sqrt(
	    abs(pow(jetTVec.Eta() - topevent->recoW1Prod2.front().Eta(), 2) +
		pow(jetTVec.Phi() - topevent->recoW1Prod2.front().Phi(), 2))));
	deltaR.push_back(
	    sqrt(abs(pow(jetTVec.Eta() - topevent->recoB2.front().Eta(), 2) +
		     pow(jetTVec.Phi() - topevent->recoB2.front().Phi(), 2))));
	deltaR.push_back(sqrt(
	    abs(pow(jetTVec.Eta() - topevent->recoW2Prod1.front().Eta(), 2) +
		pow(jetTVec.Phi() - topevent->recoW2Prod1.front().Phi(), 2))));
	deltaR.push_back(sqrt(
	    abs(pow(jetTVec.Eta() - topevent->recoW2Prod2.front().Eta(), 2) +
		pow(jetTVec.Phi() - topevent->recoW2Prod2.front().Phi(), 2))));
	std::vector<double>::iterator minit =
	    std::min_element(deltaR.begin(), deltaR.end());
	int minindex = std::distance(deltaR.begin(), minit);
	/*cout << "Closest Jet is " + v_names[minindex] +
		    "with DeltaRMin =" + std::to_string(deltaR.at(minindex))
	     << endl;*/
		return deltaR.at(minindex);
}
