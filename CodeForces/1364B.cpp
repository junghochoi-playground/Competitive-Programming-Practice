/*
    Title: Most Socially Distanced sub sequence
    Problem Statement: https://codeforces.com/problemset/problem/1364/B    
    ID: 1364B

*/

#include <bits/stdc++.h>
using namespace std;


void solve(vector<int> P, int L){
    vector<int> res;
    res.push_back(P[0]);
    bool descending = P[1] < P[0];
    for(int i = 1; i < P.size()-1; i++){
        if (descending && P[i+1] > P[i]) {
            res.push_back(P[i]);
            descending = !descending;
        } else if (!descending && P[i+1] < P[i]){
            res.push_back(P[i]);
            descending = !descending;
        }
    }

    res.push_back(P[P.size()-1]);

    cout << res.size() << endl;
    for(int x : res){
        cout << x << ' ';
    }
    cout << endl;
}

int main(){
    int T; cin >> T;
    while(T--){
        int L; cin >> L;
        vector<int> P(L);
        for(int i = 0; i < L; i++){
            int x; cin >> x;
            P[i] = x;
        }

        solve(P, L);


    }
    
}