/*
    Title: k-Tree
    Problem Statement: https://codeforces.com/problemset/problem/431/C
    ID: 431C
*/

#include <bits/stdc++.h>
using namespace std;


vector<int> DP(101, 0);
int main(){
    int N, K, D; cin >> N >> K >> D;
    DP[0] = 0;

    for(int i = 1; i <= K; i++){
        DP[i] = 1;
    }

    for (int i = 2; i <= N; i++){
        for(int j = 1; j < i; j++){ 
            // int add = (j != i-j) ? DP[j] + DP[i-j] : DP[j];
            // DP[i] += add;
            DP[i] += DP[j];
        }
    }

    for(int i = 1; i <= N; i++){
        cout << DP[i] << ' ';
    }
    cout << endl << "Answer: " << DP[N] << endl;
    



}