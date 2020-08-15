/*
    Title: Neighbor Grid
    ID: 489C
    Problem Statement: https://codeforces.com/problemset/problem/489/C
*/

#include <bits/stdc++.h>
using namespace std;


int main(){
    int length, sum; cin >> length >> sum;

    // Find a "length" numbers that add to sum
    int remainingNum = length;
    int remainingSum = sum;
    vector<int> digits;

    if (sum == 0 && length != 1  || sum > length * 9){
        cout << -1 << ' ' << -1 << endl;
    } else{
        while(remainingNum != 0){
            for(int n = 9; n >=0; n--) {
                if (remainingSum - n >= 0){
                    remainingNum--;
                    remainingSum-=n;
                    digits.push_back(n);
                    break;
                }
            }

        }

        // for(auto x : digits){
        //     cout << x << ' ';
        // } 
        // cout << endl;

        string greatestNumber = "";
        for(auto x : digits){
            greatestNumber += to_string(x);
        }

        string leastNumber = "";
        if (digits[digits.size()-1] == 0 && digits.size() != 1){
            int index = digits.size()-1;
            while(digits[index] == 0 && index >=0)
                index--;
            digits[index]-=1;
            digits[digits.size() -1] += 1;
        }

        for(int i = digits.size() - 1; i >= 0; i--){
            leastNumber += to_string(digits[i]);
        }

        cout << leastNumber << ' ' << greatestNumber << endl;
        // cout << remainingSum << endl;
        
    }





}