/*
    Title: JoySticks
    Problem Statement: https://codeforces.com/problemset/problem/651/A
    ID: 651A

*/

#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> DP;

int T(int A, int B, int time){
    if (A <= 0 || B <= 0 || (A==1 && B==1)) return time;
    if (DP[A][B] != -1) {
        return DP[A][B];
    }

    // Charge A
    int chargeA, chargeB;
    if (A == 1){
        chargeA =  T(A+1,B-2,time+1);
        chargeB = -1;
    } else if (B== 1){
        chargeA = -1;
        chargeB = T(A-2, B+1, time+1);
    } else{
        chargeA =  T(A+1,B-2,time+1);
        chargeB = T(A-2, B+1, time+1);
    }  

    int res = max(chargeA, chargeB);
    DP[A][B] = res;
    return res;
}
int main(){
    // OJ;
    int A, B; cin >> A >> B;
    int small, large;
    if (A < B) {
        small = A;
        large = B;
    } else{
        small = B;
        large = A;
    }
    int size = large + (small/2) + 10;
    DP = vector<vector<int>>(size, vector<int>(size, -1));
    cout << T(A,B,0) << endl;

}