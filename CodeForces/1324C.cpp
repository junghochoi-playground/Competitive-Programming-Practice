/*
    Title: Frog Jump
    Problem Statement: https://codeforces.com/problemset/problem/1324/C
    ID: 1324C
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; cin >> T;

    while(T--){
        string S; cin >> S;
        int N = S.length();
        vector<int> D;
        D.push_back(0);
        

        for(int i = 0; i < S.length(); i++){
            char c = S[i];
            if (c == 'R') D.push_back(i+1);
        }

        D.push_back(N+1);

        int res = -1;
        for(int i = 1; i < D.size(); i++){
            res = max(res, D[i] - D[i-1]);
        }

        cout << res << endl;



    }


}