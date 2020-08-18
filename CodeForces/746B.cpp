/*

    Title: Decoding
    ID: 746B
    Problem Statement: https://codeforces.com/problemset/problem/746/B

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; 
    string S; 
    cin >> N >> S;

  
    string res; res += S[0];

    bool left = N%2==1;
    for(int i = 1; i < N; i++){
        if (left){
            res = S[i] + res;
            
        } else{
            res = res + S[i];
            
        }
        left = !left;
    }

    cout << res << endl;
}