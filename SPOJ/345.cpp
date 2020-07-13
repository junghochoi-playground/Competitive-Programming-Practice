/*
    Title: Mixtures
    ID: 345
    Problem Statement: https://www.spoj.com/problems/MIXTURES/

    
*/

#include <bits/stdc++.h>
using namespace std;


vector<vector<pair<int,int>>> DP;
// First one is Result
// Second one is smoke
pair<int,int> solve(vector<int>& M, int i, int j){
    if (i == j) return {M[i],0};
    if(DP[i][j].first != -1 && DP[i][j].second != -1)
        return DP[i][j];
    int resSmoke = INT_MAX;
    int minSmoke = INT_MAX;

    for(int k = i; k < j; k++){
        pair<int,int> left = solve(M, i, k);
        pair<int,int> right = solve(M, k+1, j);
        int result = (left.first + right.first) % 100;
        int smoke = (left.first * right.first) + left.second + right.second;

        if (smoke < minSmoke){
            resSmoke = result;
            minSmoke = smoke;
        }
    }

    pair<int,int> res = {resSmoke, minSmoke};
    DP[i][j] = res;
    return res;

}

int main(){
    int N;
    while(cin>>N){
        vector<int> M(N);
        DP = vector<vector<pair<int,int>>>(N, vector<pair<int,int>>(N, {-1,-1}));
        for(int i = 0; i < N; i++){
            cin >> M[i];
        }
        cout << solve(M, 0, M.size()-1).second << endl;;

        


    }
}