/*
    Title: Little Girl and Game
    Problem Statement: https://codeforces.com/problemset/problem/276/B 
    ID: 276B

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    unordered_map<char, int> charMap;
    for(char c : s) {
        if (!charMap.count(c)){
            charMap.insert({c, 1});
        } else{
            charMap[c]++;
        }
    }

    int numOdd = 0;
    for (auto it = charMap.begin(); it != charMap.end(); it++){
        if (it->second % 2 == 1) {
            numOdd++;
        }
    }

    // cout << numOdd << endl;
    if (numOdd <= 1) {
        cout << "First" << endl;
    } else {
        if (numOdd % 2 == 0){
            cout << "Second" << endl;
        } else{
            cout << "First" << endl;
        }
    }

}