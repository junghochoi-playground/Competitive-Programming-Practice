/*

    Title: Tricky Sum
    ID: 598A
    Problem Statement: https://codeforces.com/problemset/problem/598/A
*/

#include <bits/stdc++.h>
using namespace std;


int main() {
    int T; cin >> T;
    while(T--){
        long long N; cin >> N;
        long long twoPower = 1;


        // long long sum = N * (N+1) / 2;

        // long long pow2 = 1;
        // while(pow2 <= N) {
        //     sum -= pow2*2;
        //     pow2*=2;
        // }

        long long sum = 0;
        for(long long i = 1; i <= N; i++){
            if (twoPower == i){
                sum += -i;
                twoPower *=2;
            } else{
                sum += i;
            }
        }

        cout << sum << endl;

    }
}