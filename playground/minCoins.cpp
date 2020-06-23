#include <bits/stdc++.h>
using namespace std;




int main(){
    int target = 5;
    vector<int> coins = {1, 3, 4};
    vector<int> first(target+1, 0);
    vector<int>dp(target+1, 0);
    vector<bool> ready(target+1, false);

    ready[0] = true;
    dp[0]    =  1;

    for(int x = 1; x <= target; x++){
   
        for(auto c : coins){
            if (x-c >= 0){
                dp[x] += dp[x-c];
            }
        }
    }

    
    cout << dp[target] << endl << endl;

    
}



/*
// Iterative Solution
int main(){
    int target = 5;
    vector<int> coins = {1, 3, 4};
    vector<int> first(target+1, 0);
    vector<int>dp(target+1, -1);
    vector<bool> ready(target+1, false);

    ready[0] = true;
    dp[0]    = 0;

    for(int x = 1; x <= target; x++){
        dp[x] = INT_MAX;
        for(auto c : coins){
            if (x-c >= 0 && dp[x-c] + 1 < dp[x]){
                dp[x] = dp[x-c]+ 1;
                first[x] = c;
            }
      
            
        }
    }

    
    cout << dp[target] << endl << endl;

    
    while(target > 0){
        cout << first [target] << endl;
        target-= first[target];
    }
}
*/
/*

// Recursive Solution


vector<bool> ready;
vector<int> dp, coins;
int solve(int target){
    if (target < 0) return INT_MAX-1;
    if (target == 0) return 0;
    if (ready[target]) return dp[target];

    int res = INT_MAX;
    for(auto c : coins){
        res = min(res, solve(target-c)+1);
    }

    dp[target] = res;
    dp[target] = true;
    return res;
}


int main(){
    int target = 10;
    coins = {1, 3, 4};
    dp = vector<int>(target+1, -1);
    ready = vector<bool>(target+1, false);

    ready[0] = true;
    dp[0] = 0;

    cout << solve(target) << endl;
}

*/