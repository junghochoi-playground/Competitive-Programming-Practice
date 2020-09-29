
/*
    Title: Ania and Minimizing
    ID: 1230B
    Problem Statement: https://codeforces.com/problemset/problem/1230/B

*/

#include <bits/stdc++.h>
using namespace std;


int main(){
    int N, K; cin >> N >> K;
    string S; cin >> S;

    if (K == 0){
        cout << S << endl;
    } else if (S.length() == 1){
        cout << '0' << endl;
        
    } else{
        int index = S[0] > '1' ? 0 : 1;
 
        if (index == 0){
            S[0] = '1';
            index++;
            K--;
        }
        
        while(K > 0 && index < S.length()) {
            if (S[index] =='0') {
                index++;
                continue;
            }
            S[index] = '0';       
            index++;
            K--;
        }
        
        cout << S << endl;

    }

    

}