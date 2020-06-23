#include <bits/stdc++.h>
using namespace std;

vector<bool> calc;
vector<int> dp, coins;
int solve(int target){
    int res = INT_MAX;
    for(auto c : coins){
        int v = target -c;
        if (v < 0) return INT_MAX;
        if (calc[v]) {
            res = min(res, dp[v] + 1);
        } else{
            int subsolution = solve(v) + 1;
            res = min (res, subsolution);
            
            calc[v] = true;
            dp[v] = subsolution;
         }


        

    }

    return res;
}


int main(){
    int target = 10;
    coins = {1, 3, 4};
    dp = vector<int>(target+1, -1);
    calc = vector<bool>(target+1, false);
    calc[0] = true;
    dp[0] = 0;
    cout << solve(target) << endl;
}