#include <bits/stdc++.h>
using namespace std;

/*
vector<vector<int>> DP;
vector<int> T;
int solve(int lo, int hi, int a){

    
    if (lo > hi) return 0;
    if (DP[lo][hi] != -1) return DP[lo][hi];
   

    int res;
    int left = solve(lo+1, hi, a+1) + a*T[lo] ;
    int right = solve(lo, hi-1, a+1 ) + a*T[hi];

    res = max(left,right);
    

    DP[lo][hi] = res;
    return res;
}


int main(){
    int N; cin >> N;
    DP = vector<vector<int>>(N, vector<int>(N, -1));
    T = vector<int>(N);
    for(int i = 0; i < N; i++) {
        cin >> T[i];
    }

    int lo = 0, hi = N-1, a = 1, rev = 0;
    cout << solve(lo, hi, a) << endl;
}

*/


/*

vector<vector<int>> DP;
vector<int> T;
int solve(int lo, int hi, int a){


    
    int res;
    if (DP[lo][hi] != -1) return DP[lo][hi];
    if (lo == hi){
        res = a * T[lo];
    } else{
        int left = solve(lo+1, hi, a+1 ) + a*T[lo];
        int right = solve(lo, hi-1, a+1) + a*T[hi];
    
        res = max(left,right);
    }

    DP[lo][hi] = res;
    return res;
}



int main(){
    int N; cin >> N;
    DP = vector<vector<int>>(N, vector<int>(N, -1));
    T = vector<int>(N);
    for(int i = 0; i < N; i++) {
        cin >> T[i];
    }

    int lo = 0, hi = N-1, a = 1;
    cout << solve(lo, hi, a) << endl;
}
*/


vector<vector<int>> DP;
vector<int> T;
int solve(int lo, int hi, int a, int rev){


    
    int res;
    if (DP[lo][hi] != -1) return DP[lo][hi];
    if (lo == hi){
        res = rev + a * T[lo];
    } else{
        int left = solve(lo+1, hi, a+1, rev + a*T[lo]);
        int right = solve(lo, hi-1, a+1, rev + a*T[hi]);
    
        res = max(left,right);
    }

    DP[lo][hi] = res;
    return res;
}



int main(){
    int N; cin >> N;
    DP = vector<vector<int>>(N, vector<int>(N, -1));
    T = vector<int>(N);
    for(int i = 0; i < N; i++) {
        cin >> T[i];
    }

    int lo = 0, hi = N-1, a = 1, rev = 0;
    cout << solve(lo, hi, a, rev) << endl;
}


