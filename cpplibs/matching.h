using namespace std;
#include "Math/VectorUtil.h"
#include <TLorentzVector.h>
#include <map>
#include <set>
#include <unistd.h>
#include <vector>
using ROOT::Math::VectorUtil::DeltaR;
struct Matches {
    vector<pair<TLorentzVector *, TLorentzVector *>> matches;
    vector<TLorentzVector *> misses, fakes;
};

//template for highestclosest/closesthighest
vector<pair<TLorentzVector *, TLorentzVector *>> highclosematch(vector<pair<TLorentzVector *, TLorentzVector *>> a) {
    auto comp = [](pair<pair<TLorentzVector *, TLorentzVector *>, double> &v1, pair<pair<TLorentzVector *, TLorentzVector *>, double> &v2) { if(v1.first.first->Pt() != v2.first.first->Pt()) { return v1.first.first->Pt() > v2.first.first->Pt(); } else{return( ROOT::Math::VectorUtil::DeltaR(*v1.first.first, *v1.first.second) > ROOT::Math::VectorUtil::DeltaR(*v2.first.first, *v2.first.second));} };
    vector<pair<pair<TLorentzVector *, TLorentzVector *>, double>> candidates;
    for (auto c : a) {
	double thisDeltaR;
	thisDeltaR = DeltaR(*(c.first), *(c.second));
	candidates.push_back(make_pair(make_pair(c.first, c.second), thisDeltaR));
    }

    sort(candidates.begin(), candidates.end(), comp);
    vector<pair<TLorentzVector *, TLorentzVector *>> matches;
    for (auto &candidate : candidates) {
	if (candidate.second >= 0.3) break;
	if ((candidate.first.first) == nullptr || (candidate.first.second) == nullptr) continue;
	matches.push_back(make_pair(candidate.first.first, candidate.first.second));
	candidate.first.first = nullptr;
	candidate.first.second = nullptr;
    }
    return matches;
}
Matches highesthighest(vector<TLorentzVector *> genJets, vector<TLorentzVector *> recJets) {
    auto comp = [](pair<pair<TLorentzVector *, TLorentzVector *>, double> &a, pair<pair<TLorentzVector *, TLorentzVector *>, double> &b) { if (
																			     a.first.first->Pt() != b.first.first->Pt()) { return a.first.first->Pt() > b.first.first->Pt(); } else { return a.first.second->Pt() > b.first.second->Pt(); } };
    vector<pair<pair<TLorentzVector *, TLorentzVector *>, double>> candidates;
    for (TLorentzVector *gen : genJets) {
	double thisDeltaR;
	for (TLorentzVector *rec : recJets) {
	    using ROOT::Math::VectorUtil::DeltaR;
	    thisDeltaR = ROOT::Math::VectorUtil::DeltaR(*gen, *rec);
	    candidates.push_back(make_pair(make_pair(gen, rec), thisDeltaR));
	}
    }

    Matches currmatches;

    sort(candidates.begin(), candidates.end(), comp);
    vector<pair<TLorentzVector *, TLorentzVector *>> matches;
    for (auto &candidate : candidates) {
	if (candidate.second >= 0.3) break; //maybe erase
	if ((candidate.first.first) == nullptr || (candidate.first.second) == nullptr) continue;
	matches.push_back(make_pair(candidate.first.first, candidate.first.second));
	candidate.first.first = nullptr;
	candidate.first.second = nullptr;
    }

    vector<TLorentzVector *> misses, fakes;
    for (candidate : candidates) {
	if ((candidate.first.first) != nullptr) {
	    misses.push_back((candidate.first.first));
	    (candidate.first.second) = nullptr;
	}
	if ((candidate.first.second) != nullptr) {
	    fakes.push_back(candidate.first.second);
	    (candidate.first.first) = nullptr;
	}
    }

    currmatches.matches = matches;
    currmatches.misses = misses;
    currmatches.fakes = fakes;
    return currmatches;
}
Matches highestclosest(vector<TLorentzVector *> genJets, vector<TLorentzVector *> recJets) {

    Matches currmatches;

    vector<pair<TLorentzVector *, TLorentzVector *>> pairs;
    for (auto gen : genJets) {
	for (auto rec : recJets) {
	    pairs.push_back(make_pair(gen, rec));
	}
    }

    //call template here

    currmatches.matches = highclosematch(pairs);
    return currmatches;
}
Matches closesthighest(vector<TLorentzVector *> genJets, vector<TLorentzVector *> recJets) {
    Matches currmatches;

    vector<pair<TLorentzVector *, TLorentzVector *>> pairs;
    for (auto gen : genJets) {
	for (auto rec : recJets) {
	    pairs.push_back(make_pair(rec, gen));
	}
    }

    //call template here

    currmatches.matches = highclosematch(pairs);

    return currmatches;
}

Matches closestclosest(vector<TLorentzVector *> genJets, vector<TLorentzVector *> recJets) {
    //currently ambiguous
    map<double, pair<TLorentzVector **, TLorentzVector **>> candidates;
    Matches currmatches;
    for (TLorentzVector *&gen : genJets) {
	double thisDeltaR;
	for (TLorentzVector *&rec : recJets) {
	    //cout << __LINE__ << " "  <<gen << " " <<   &gen << " " <<rec << " " << &rec << endl;
	    //cout << __LINE__ << " "  <<gen->Pt() << " " <<   &genJets[0] << " " <<rec->Pt() << " " << &rec << endl;
	    using ROOT::Math::VectorUtil::DeltaR;
	    thisDeltaR = ROOT::Math::VectorUtil::DeltaR(*gen, *rec);
	    if (thisDeltaR < 0.3)
		candidates.insert({thisDeltaR, make_pair(&gen, &rec)});
	}
    }
    vector<pair<TLorentzVector *, TLorentzVector *>> matches;
    for (auto &candidate : candidates) {
	//cout << __LINE__ << " " << candidate.second.first << " " << candidate.second.second << " " << * candidate.second.first << " " << *candidate.second.second << endl;
	if (*(candidate.second.first) == nullptr || *(candidate.second.second) == nullptr) continue;
	matches.push_back(make_pair(*(candidate.second.first), *(candidate.second.second)));
	*candidate.second.first = nullptr;
	*candidate.second.second = nullptr;

	//cout << __LINE__ << " " << candidate.second.first << " " << candidate.second.second << " " << * candidate.second.first << " " << *candidate.second.second << endl;
    }

    //for (auto match : matches) {
    //cout << __LINE__ << " " <<  match.first << " " << match.second << endl;
    //}

    currmatches.matches = matches;
    return currmatches;
}
bool allmatch(vector<TLorentzVector *> genJets, vector<TLorentzVector *> recJets) {
    bool allmatched = true;

    Matches currmatches = closestclosest(genJets, recJets);
    for (TLorentzVector *rec : recJets) {
	bool thismatch = false;
	for (auto match : currmatches.matches) {
	    if (rec == match.second) {
		thismatch = true;
	    }
	}
	allmatched = thismatch && allmatched;
    }
    return allmatched;
}
bool allmatchunambiguous(vector<TLorentzVector *> genJets, vector<TLorentzVector *> recJets, TopEvent *topevent) {
	//cout << "B1 : " << topevent->genpartonB1.Pt() << " B2: " << topevent->genpartonB2.Pt() << " W1Prod1: " << topevent->genpartonW1Prod1.Pt() << " W1Prod2: " << topevent->genpartonW1Prod2.Pt() << " W2Prod1: " <<topevent->genpartonW2Prod1.Pt() << " W2Prod2: " << topevent->genpartonW2Prod2.Pt() << endl;
    bool allmatched = true;
	bool match0B1 = false;
    Matches currmatches = closestclosest(genJets, recJets);
    for (size_t ir = 0; ir < recJets.size(); ++ir) {
	bool thismatch = false;
	for (auto match : currmatches.matches) {
	    if (recJets[ir] == match.second) {
// cout << " CURR RECO " << (*recJets[ir]).Pt() << endl;
	//    cout <<__LINE__ << "reco " << match.second->Pt() << " gen " << match.first->Pt() << endl;
	if (thismatch) {
		    allmatched = false;
		    break;
		}
		
		switch (ir) {
		case 0:
		    if (*match.first == topevent->genpartonB1) {
				match0B1 = true;
			thismatch = true;
		    }
			else if (*match.first == topevent->genpartonB2) {
			match0B1 = false;
			thismatch=true;
			}
		    break;
		case 1:
			if (match0B1) {
			if (*match.first == topevent->genpartonB2) {
			thismatch = true;
			
			}
			}
			else{
		    if (*match.first == topevent->genpartonB1) {
			thismatch = true;
			}
		    }
		    break;
		case 2:
			if(match0B1){
		    if (*match.first == topevent->genpartonW1Prod1 || *match.first == topevent->genpartonW1Prod2) {
			thismatch = true;
		    }
			}
			else if (*match.first == topevent->genpartonW2Prod1 || *match.first == topevent->genpartonW2Prod2) {
				thismatch=true;
			}
		
		    break;
		case 3:
			if(match0B1){
		    if (*match.first == topevent->genpartonW1Prod1 ||  *match.first ==topevent->genpartonW1Prod2) {
			thismatch = true;
		    }
			}
			else if (*match.first == topevent->genpartonW2Prod1 || *match.first == topevent->genpartonW2Prod2) {
				thismatch=true;
			}
		    break;
		case 4:
			if(match0B1){
		    if (*match.first == topevent->genpartonW2Prod1 || *match.first ==topevent->genpartonW2Prod2) {
			thismatch = true;
		    }
			}
			else if (*match.first == topevent->genpartonW1Prod1 || *match.first ==topevent->genpartonW1Prod2) {
				thismatch=true;
			}
		    break;
		case 5:
			if(match0B1){
		    if (*match.first == topevent->genpartonW2Prod1 || *match.first == topevent->genpartonW2Prod2) {
			thismatch = true;
		    }
			}
			else if (*match.first == topevent->genpartonW1Prod1 || *match.first == topevent->genpartonW1Prod2) {
				thismatch=true;
			}
		    break;
		}
	    }
	}
	allmatched = thismatch && allmatched;
    }
    //cout << allmatched << endl;
    return allmatched;
}
