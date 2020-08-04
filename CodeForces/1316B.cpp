/*
    Title: String Modification
    ID: 1316B
    Problem Statement: http://codeforces.com/problemset/problem/1316/B
*/

#include <bits/stdc++.h>
using namespace std;

pair<string, int> solve(int length, string str){
    
    string res = str;
    int resK = 1;
    for(int k = 2; k <= length; k++){
        string suffix = str.substr(0,k-1);
        if (length % 2 == 0 &&  k % 2 == 0 || length% 2 == 1 && k % 2 == 1){
            reverse(suffix.begin(), suffix.end());
        }
        string rev = str.substr(k-1, length-k+1) + suffix;
        if (rev < res){
            res = rev;
            resK = k;
        }   
    }

    return {res, resK};
    
}

int main(){
    int T; cin >> T;
    while (T--){
        int length; string s;
        cin >> length >> s;
        pair<string, int> res = solve(length, s);
        // cout << "\t";
        cout << res.first << endl;
        // cout << "\t";
        cout << res.second << endl;


        
        
    }
}


