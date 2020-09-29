/*
    Title: Zero Remainder Array
    ID: 1347D
    Problem Statement: https://codeforces.com/problemset/problem/1347/D

*/

#include <bits/stdc++.h>
using namespace std;


int main(){
    int N, K; cin >> N >> K;
    vector<int> arr(N, 0);
    
    int maxRemainder = -1;
    int maxNum;
    for(int i = 0; i < N; i++){
        int x; cin >> x;
        arr[x%K]++;
        if (arr[x%K] > maxRemainder){
            maxRemainder = arr[x%K];
            maxNum = x%K;
        }       
    }
    int completeCycles = maxRemainder - 1;
    int incompleteMoves;
    if (maxNum % 2 == 0){
        int mid = maxNum/2;
        incompleteMoves = mid+1;
    } else{
        incompleteMoves = mid/2 + 1;
    }

    cout << (completeCycles * K + incompleteMoves) << endl;


}