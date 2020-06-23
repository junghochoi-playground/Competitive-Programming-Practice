#include <bits/stdc++.h>
using namespace std;


vector<vector<pair<int,int>>> dp;

int main(){
    dp = vector<vector<pair<int,int>>>(3, vector<pair<int,int>>(3, {1,1}));
    for(int i = 0; i < dp.size(); i++){
        for(int j = 0; j < dp[i].size(); j++){
            cout << dp[i][j].first << "," << dp[i][j].first << " ";
        }
        cout << endl;
    }
    
} 