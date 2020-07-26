/*

    Title: Two Rival Students
    Problem Statement: https://codeforces.com/problemset/problem/1257/A
    ID: 1257A

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; cin >> T;
    while(T--){
        int N, X, A, B; cin >> N >> X >> A >> B;
        
        int small, big;
        if (A > B){
            big = A; small = B;
        } else{
            big = B; small = A;
        }

        if (X>= (small-1)){
            small = 1;
            X -= small;
        } else{
            small -= X;
        }

        if (X >= (N-big)){
            big = N;
            X -= N-big;
        } else{
            big += X;
        }

        // cout << small << ' ' << big << endl;

        cout << abs(big - small) << endl;
    }
}