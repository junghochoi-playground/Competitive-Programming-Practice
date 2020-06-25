#include <bits/stdc++.h>
using namespace std;


/* 
    Problem Statetment
    https://www.geeksforgeeks.org/matrix-chain-multiplication-dp-8/
*/


// Recursive Algorithm
vector<vector<int>> DP;

int matrixChainOrder(vector<int>M, int i , int j){
    if (i == j) return 0;

    if (DP[i][j] != -1) 
    {
        cout << "DP has been used" << endl;
        return DP[i][j];
    }
    int res = INT_MAX;


    
    for(int k = i; k < j; k++){
        int left = matrixChainOrder(M, i, k);
        int right = matrixChainOrder(M, k+1, j);
        int operations = M[i-1] * M[k]  * M[j];
        res = min(res, left + right + operations);
    }

    DP[i][j] = res;
    return res;



}
int main(){
    
    vector<int> M = {1, 5, 2 ,6, 7,8, 2, 4, 6 , 4,2 ,6, 7, 8, 3}; // Answer is 334
    DP = vector<vector<int>> (M.size()+1, vector<int>(M.size()+1, -1));

    cout << matrixChainOrder(M, 1, M.size()-1) << endl;
}


// Iterative Algorithm - Figure out the iterative algorithm


vector<vector<int>> DP;
int matrixChainOrder(vector<int>M){
    

    // Base Case :  Matrix by itself does not cost any operations
    for(int i = 0; i < M.size(); i++){
        DP[i][i] = 0;
    }

    for(int L = 2; L < M.size(); L++){
        //Opening Parenthesis
        for(int i = 1; i < M.size() - L + 1){
            int j = i + L - 1;
            for (int k = i; k < j; k++){
                int left = DP[i-1][k];
                int right = DP[k+1][j]; 
                int operations = M[i-1] * M[k] * M[j];
                DP[i][j] = 
            }
        }
    }

}
int main(){
    vector<int> M = {1, 5, 2 ,6, 7,8, 2, 4, 6 , 4,2 ,6, 7, 8, 3}; // Answer is 334
    DP = vector<vector<int>> (M.size()+1, vector<int>(M.size()+1, -1));

    cout << matrixChainOrder(M, 1, M.size()-1) << endl;


    
}

