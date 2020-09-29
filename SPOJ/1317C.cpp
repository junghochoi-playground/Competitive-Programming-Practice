/*
    Title: A cookie for you
    ID: 1317C
    Problem Statement: https://codeforces.com/problemset/problem/1317/C

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; cin >> T;
    while(T--){
        long long V, C, N, M; cin >> V >> C >> N >> M;
        if (N+M <= V+C && M <= min(V, C)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}