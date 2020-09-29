/*
    Title: Most Socially Distanced sub sequence
    Problem Statement: https://codeforces.com/problemset/problem/1364/B    
    ID: 1364B

*/

#include <bits/stdc++.h>
using namespace std;


int main(){
    int T; cin >> T;
    while(T--){

        int N; cin >> N;

        long long res = 0;
        long long previous; cin >> previous;
        for(int i = 1; i < N; i++){
            long long x; cin >> x;

            if (previous - x > 0){
                res += previous-x;
            }
  

            previous = x;

        }

        cout << res << endl;

        
        
    }
}