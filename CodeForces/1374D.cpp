/*
    Title: Zero Remainder Array
    ID: 1374D
    Problem Statement: https://codeforces.com/problemset/problem/1374/D

*/

#include <bits/stdc++.h>
using namespace std;


int main(){


    /*


    int T; cin >> T;
    while(T--){

        int N, K; cin >> N >> K;   
        vector<int> arr(K,0);
        
        

        int maxRemainder = 0;
        int maxNum = 0;
        for(int i = 0; i < N; i++){
            int x; cin >> x; 
            x %= K;
            arr[x]++;

            if (arr[x] > maxRemainder && x != 0){
                maxRemainder = arr[x];
                maxNum = x;
            }

        }

        /*
            1 2 3 4 5 6 7 8 9 
            1 3 6 10 15 
        */
        int completeCycleMoves = 0;
        if (maxRemainder == 0){
            completeCycleMoves = K * (maxRemainder - 1);
        }
        
        // cout << "Max Num: " << maxNum << endl;

        int i = 0;
        while(arr[i] != maxRemainder){
            i++;
        }
        int incompleteCycleMoves = 0;
        if (i != K) {
            incompleteCycleMoves = K-i;
        }
        // cout << completeCycleMoves << incompleteCycleMoves << endl;
        int res = completeCycleMoves + incompleteCycleMoves;
        if (completeCycleMoves + incompleteCycleMoves != 0){
            res++;
        }
         // 1 is for the extraneous x = 0 that does nothing
        
        cout << res << endl;

    }

    */

}