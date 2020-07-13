/*
    Title: Helpful Maths
    Problem Statement: https://codeforces.com/problemset/problem/339/A
*/

#include <bits/stdc++.h>
using namespace std;
  

int main(){
    string s; cin >> s;
    vector<char> nums;
    for(int i = 0; i < s.length(); i++){
        char c = s[i];
        if (c == '+') continue;
        nums.push_back(c);
    }
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++){
        if (i == nums.size()-1) cout << nums[i] << endl;
        else cout << nums[i] << '+';
    }
}