/*
    Title: Mahmoud and Longest Uncommon Subsequence
    ID: 766A
    Problem Statement: https://codeforces.com/problemset/problem/766/A

*/

#include <bits/stdc++.h>
using namespace std;


int main(){
    string A, B; cin >> A >> B;
    if (A == B){
        cout << -1 << endl;
    } else{
        cout << max(A.size(), B.size()) << endl;
    }
}