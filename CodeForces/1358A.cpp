/*
    Title: Park Lighting
    Problem Statement:  https://codeforces.com/problemset/problem/1358/A
    ID: 1358A

*/


#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; cin >> T;
    while(T--) {
        int N, M; cin >> N >> M;
        int squares = N * M;
        int res;
        if (squares % 2 == 1) res = (squares/2) + 1;
        else res = squares/2;
        cout << res << endl;
    }
}