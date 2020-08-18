/*
<<<<<<< HEAD

    Title: Sign Flipping
=======
    Title: Vacations
>>>>>>> 91b39527f345cc7dc196ff6ab78412267e6c58a8
    ID: 698A
    Problem Statement: https://codeforces.com/problemset/problem/698/A

*/

#include <bits/stdc++.h>
using namespace std;


int main(){
    
    
    // int DP[100][3]; memset(DP, 1000, sizeof(DP));
    vector<vector<int>> DP (100, vector<int>(3, 10000));
  
    // cout << DP[39][2] << endl;
    int D; cin >> D;
    vector<int> A(D);

    for(int i = 0; i < D; i++){
        int x; cin >> x;
        A[i] = x;
    }

    if (A[0] == 0) DP[0][0] = 1;
    if (A[0] == 1) DP[0][1] = 0;
    if (A[0] == 2) DP[0][2] = 0;
    if (A[0] == 3) {
        DP[0][1] = 0;
        DP[0][2] = 0;
    }

    
    // cout << DP[0][0] << ' ' << DP[0][1] << ' ' << DP[0][2] << endl;

    for (int i = 1; i < D; i++){
        
        // Resting
        
        DP[i][0] = 1 + min( min(DP[i-1][0], DP[i-1][1]) , DP[i-1][2]);
         

        // 1 - coding
        if (A[i] == 1 || A[i] == 3){
            DP[i][1] = min(DP[i-1][0], DP[i-1][2]);
        }

        //2
        if (A[i] == 2 || A[i] == 3){
            DP[i][2] = min(DP[i-1][0], DP[i-1][1]);
        }

        // cout << DP[i][0] << ' ' << DP[i][1] << ' ' << DP[i][2] << endl;
    }


    cout << min( min (DP[D-1][0], DP[D-1][1]), DP[D-1][2]) << endl;



}