/*
    Title: Woodcutters
    Problem Statement: https://codeforces.com/problemset/problem/545/C
    ID: 545C
*/


#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; cin >> T;
    vector<int> P(T);
    vector<int> H(T);

    for(int i = 0; i < T; i++){
        int p, h; cin >> P[i]>>  H[i];

    }

    int leftMost = P[0];
    int res = 1;
    for(int i = 1; i < T; i++){
        int p = P[i], h = H[i];
        
        //Fall left
        // cout << p << ' ' << h << endl;
        if (p - h > leftMost){
            // cout << "Left" << endl;
            leftMost = p;
            res++;  
        } 
        // Fall right
        
        else if (i + 1 >= T || p + h < P[i+1]){
            // cout << "Right" << endl;
            leftMost = p + h;
            res++;
        } 
        // Stay
        else{
            // cout << "Stay" << endl;
            leftMost = p;
        }
    }

    cout << res << endl;




}