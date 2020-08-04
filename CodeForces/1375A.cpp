/*
    Title: Sign Flipping
    ID: 1375A
    Problem Statement: https://codeforces.com/problemset/problem/1375/A
*/

#include <bits/stdc++.h>
using namespace std;


void solve(vector<int>& nums){
    for (int i = 0; i < nums.size(); i++){
        if (i%2 == 0){
            if (nums[i] > 0) {
                nums[i] = -nums[i];
            }
        } else{
            if (nums[i] < 0){
                nums[i] = -nums[i];
            }
        }
    }
}


int main(){
    int T; cin >> T;
    while (T--){
        int size; cin >> size;
        vector<int> nums(size);
        for(int i = 0; i < size; i++){
            int x; cin >> x;
            nums[i] = x;
        }

       
        solve(nums);
        cout << '\t';
        for(auto x :  nums){
            cout << x << ' ';
        }
        cout << endl;
        
    }
}
