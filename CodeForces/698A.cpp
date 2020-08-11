/*
    Title: Sign Flipping
    ID: 698A
    Problem Statement: https://codeforces.com/problemset/problem/698/A

*/

#include <bits/stdc++.h>
using namespace std;


int main(){
    int D; cin >> D;
    vector<int> A(D+1);
    for(int i = 1; i <= D; i++){
        int x; cin >> x;
        A[i] = x;
    }
    vector<int> DP(D+1);
    DP[0] = 0;
    for(int i = 1; i <= D; i++){
        if (A[i] == 0){
            D[i] = D[i-1] + 1;
        } else
    }




}