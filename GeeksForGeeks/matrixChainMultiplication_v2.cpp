#include <bits/stdc++.h>
using namespace std;



/*
    Problem Statement https://www.geeksforgeeks.org/matrix-chain-multiplication-dp-8/
    gonna try this problem recursively and iteratively myself, so that I fully understand the problem

*/


int iterative(vector<int>&M){
    vector<vector<int>> DPIterative(M.size() + 1, vector<int> (M.size() + 1, INT_MAX));


    for(int i = 0; i < DPIterative.size(); i++){
        DPIterative[i][i] = 0;
    }
    
    for(int L = 2; L < M.size(); L++){
        for(int i = 1; i < M.size() - L + 1; i++){
            int j = i + L -1;

            for(int k = i; k < j; k++){
                int left = DPIterative[i][k];
                int right = DPIterative[k+1][j];
                int operations = M[i-1] * M[k] * M[j];

                DPIterative[i][j] = min(DPIterative[i][j], left + right + operations);

            }
        }
    }

    // for(int i = 0; i < DPIterative.size(); i++){
    //     for(int j = 0; j < DPIterative[i].size(); j++){
    //         cout << DPIterative[i][j] << ' ';
    //     }
    //     cout << endl;
    // }
    return DPIterative[1][M.size()-1];
    
    // DP[i][j] is the minimum number of operations for the matrices in the range i to j
}

//Recursive
vector<vector<int>> DPRecurse;
int recursive(vector<int>& M, int i, int j){
    // Base Case - If there is only one matrix, then there is zero opertaions to be done
    if (i == j) return 0;
    if (DPRecurse[i][j] !=-1){
        return DPRecurse[i][j];
    } 
    int res = INT_MAX;
    for(int k = i; k < j; k++){
        
        //Left Operations 
        int left  = recursive(M, i, k);
        int right = recursive(M, k+1, j);
        int operations = M[i-1] * M[k] * M[j];
        res = min(res, operations + left + right);
        
    }
    DPRecurse[i][j] = res;
    return res;
}
int main(){

    vector<int> M = {4, 2, 3, 1, 3, 4, 5,6, 2 ,5, 6}   ; 
    DPRecurse = vector<vector<int>>(M.size(), vector<int>(M.size(), -1));
    cout << recursive(M, 1, M.size()-1) << endl;
    cout << iterative(M) << endl;
}