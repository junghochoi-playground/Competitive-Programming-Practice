/*
    Title: Oleysa and Rodion
    Problem Statement:https://codeforces.com/problemset/problem/584/A
    ID: 548A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, T; cin >> N >> T;
    if (T == 10){
        if (N == 1) cout << -1 << endl;
        else {
            for(int i = 1; i<= N-1; i++){
                cout << '1';
            }
            cout << '0' << endl;
        }

    } else{
        for(int i = 0; i < N; i++){
            cout << T;
        }
        cout << endl;
    }
}
  