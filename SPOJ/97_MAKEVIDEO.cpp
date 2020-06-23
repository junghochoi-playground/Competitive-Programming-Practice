#include <bits/stdc++.h>
using namespace std;



//DP Array
vector<vector<pair<int,int>>> DP;


// Answer is the Budget Left, Total Fun;
pair<int, int> KS (int B, int F, int PI, vector<pair<int,int>>& parties){
    pair<int,int> res;

    // If our we have memoized a the same subrproblem, retrieve it from the DP Array;
    if (DP[PI][B].first != -1 && DP[PI][B].second != -1){
        return DP[PI][B];
    }
    if (B == 0 || PI == 0) {
        // Base Case
        // When either we have no more money left, or we have exhausted through the entire party list
        res = {B, 0};
    } else if (B < parties[PI].first){
        // Fee for the next party is too high for us to buy a ticket
        // Move on to the next party
        res = KS(B, F, PI-1, parties);
    } else{
        // We have enough money to buy a ticket to the next party
        // We have to Options: to go to the party or not to go the party
        // Which ever option reveals the greater totalFun will be the answer;

        // Going to the party
        pair<int,int> go = KS(B-parties[PI].first, F+parties[PI].second, PI-1, parties);
        go.second += parties[PI].second;
        // Don't go the party;
        pair<int,int> stop = KS(B, F, PI-1, parties);


        //Compare the total fun values, and the price to find the optimal decision
        if (go.second == stop.second){
            // If both give the same fun value, pick the cheaper option
            if (go.first > stop.first) {
                res = go;
            } else{
                res = stop;
            }
        } else if (go.second > stop.second) {
            res = go;
        } else {
            res = stop;
        }
    }
    
    //Store the value into DP array
    DP[PI][B] = res;
    return res;
}


int main() {
    int B, NP; cin >> B >> NP;
    while(B!= 0 && NP != 0){

        //Initialize the DP Array;
        DP = vector<vector<pair<int,int>>>(NP + 1, vector<pair<int,int>> (B+1, {-1,-1}));

        //Initialize Parties array
        vector<pair<int,int>> parties;
        parties.push_back({-1,-1});


        // Read innput
        for (int i = 0; i < NP; i++){
            int fee, fun; cin >> fee >> fun;
            parties.push_back({fee, fun});
        }

        //Print Answer
        pair<int, int> res = KS (B, 0, NP, parties);
        cout << (B-res.first) << ' ' << res.second << endl;

        //Set up for next Problem
        DP.clear();
        cin >> B >> NP;

    }
    

}

