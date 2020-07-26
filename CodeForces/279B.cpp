/*
    Title: books
    ID: 279B
    Problem Statement: https://codeforces.com/problemset/problem/279/B

*/

#include <bits/stdc++.h>
using namespace std;


// Two Pointers Method

int main(){
    int N, T; cin >> N >> T;
    vector<int> B(N);
    for(int i = 0; i < N; i++){
        cin >> B[i];
    }
   
    
    int res = 0;

    int lo = 0, hi = 0;
    int sum = 0;
    while (hi < N){

        if (sum + B[hi] <= T){
            sum += B[hi];
            hi++;
        } else {
            sum = max(0, sum - B[lo]);
            res = max(res, hi - lo);
            if (lo == hi) hi++;
            lo++;
        }
    }
    res = max(res, hi-lo);

    cout << res << endl;
}

// Sum Array + Binary search method
