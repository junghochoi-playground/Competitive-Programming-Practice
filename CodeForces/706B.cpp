/*
    Title: Interesting Drinks
    Problem Statement: https://codeforces.com/problemset/problem/706/B
*/

#include <bits/stdc++.h>
using namespace std;
  


int main(){
    int N; cin >> N;
    vector<int> D(N);
    for(int i = 0; i < N; i++){
        cin >> D[i];
    }
    sort(D.begin(), D.end());

    int Q; cin >> Q;
    for(int i = 0; i < Q; i++){
        int q; cin >> q;

        int lo = 0, hi = D.size()-1, mid;
        int res = 0;
        while(lo <= hi){
            mid = lo + (hi - lo)/2;
            if (D[mid] <= q) {
                res = max(mid + 1, res);
                lo = mid+1;
            } else if (D[mid] > q){
                hi = mid-1;
            }
        }

        cout << res << endl;

        
    }






}