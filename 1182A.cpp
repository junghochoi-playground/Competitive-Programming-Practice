/*
    Title: Filling Shapes
    ID: 1182A
    Problem Statement: https://codeforces.com/problemset/problem/1182/A

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N; cin >> N; 
    if ((N*3) % 6 != 0) cout << 0 << endl;


    else {
        long long sections = (N*3) / 6;
        long long res = pow(2, sections);
        cout << res << endl;
    }
}  