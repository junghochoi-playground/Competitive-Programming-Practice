#include <bits/stdc++.h>
using namespace std;


unordered_map<long long,long long> dp;

long long solve (long long n){  
    if (n == 0) return 0;
    if (dp.count(n)) return dp[n]; 
    long long best = max( solve(n/2) + solve(n/3) + solve(n/4), n);
    dp[n] = best;
    return best;
}
int main () {
    int n;
    while (cin >> n){
        // dp = vector<long long >(n+1, -1);
        dp.clear();
        cout << solve(n) << endl;
    }
    return 0;
}