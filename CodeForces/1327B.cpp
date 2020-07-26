/*
    Title: Princesses and Princes
    Problem Statement: https://codeforces.com/problemset/problem/1327/B
    ID: 1327B
*/


#include <bits/stdc++.h>
#define OJ \
    freopen("../file.in", "r", stdin); \
    freopen("../file.out", "w", stdout);
using namespace std;

int main(){

OJ;
int T; cin >> T;
while(T--){
    int N; cin >> N;
    vector<vector<int>> match(N, vector<int>());
    for(int i = 0; i < N; i++){
        int numPrince; cin >> numPrince;
        for(int j  = 0; j < numPrince; j++){
            int prince; cin >> prince;
            match[i].push_back(prince);
        }
    }


    int singlePrincess = -1;
    vector<bool> takenPrinces (N+1, false);
    for(int i = 0; i < match.size(); i++){
        int j = 0;
        while(j < match[i].size() && takenPrinces[match[i][j]]){
            j++;
        }

        // cout << "j : " << j << endl;
        if (j < match[i].size()){
            takenPrinces[match[i][j]] = 1;
        } else{
            singlePrincess = i + 1;
        }
    
        // for(int i = 1; i < N+1; i++){
        //     cout << takenPrinces[i];
        // }
        // cout << endl;
    }

    if(singlePrincess == -1) cout << "OPTIMAL" << endl;
    else{
        for(int i = 1; i < takenPrinces.size(); i++){
            if (!takenPrinces[i]){
                cout << "IMPROVE" << endl;
                cout << singlePrincess << ' ' << i << endl;
                break;
            }
        }
    }



}





}