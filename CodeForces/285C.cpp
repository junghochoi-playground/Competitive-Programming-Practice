/*
    Title: Building Permutation
    Problem Statement: https://codeforces.com/problemset/problem/285/C 
    ID: 285C

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> nums(N);
    
    for(int i = 0; i < N; i++){
        int x; cin >> x;
        nums[i] = x;
    }

    sort(nums.begin(), nums.end());

    long long res = 0;
    for(int i = 0; i < N; i++){

        int diff = abs((i+1)-nums[i]);
        res += diff;
    }
    cout << res << endl;
}