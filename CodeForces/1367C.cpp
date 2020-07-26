/*

    Title: Social Distance
    Problem Statement: https://codeforces.com/problemset/problem/1367/C
    ID: 1367C

*/

#include <bits/stdc++.h>
using namespace std;



int solve(vector<int>& pos, int N, int K){

    if (pos.size() ==0){
        int res = 0;
        for(int i = 0; i < N; i+= (K+1)){
            res++;
        }
        return res;
    }
    int a, b;
    // Before
    int before = 0;
    a = 0; b = pos[0] - (K+1);
    for(int i = a; i <= b; i+=(K+1)){
        before++;
    }

    // Between
    int mid = 0;
    for(int i = 1; i < pos.size(); i++){
        a = pos[i-1] + (K+1); b = pos[i] - (K+1);
        for(int j = a; j <=b; j += (K+1)){
            mid++;
        }

    }

    // After
    int after = 0;
    a = pos[pos.size()-1] + (K+1);
    b = N-1;
    for(int i = a; i <=b; i+=(K+1)){
        after++;
    }

    return before + mid + after;
}
int main(){
    int T; cin >> T;
    while(T--){
        int N, K; cin >> N >> K;
        string S; cin >> S;

        vector<int> pos;
        for(int i = 0; i < S.length(); i++){
            if (S[i]=='1') pos.push_back(i);
        }

        cout << solve(pos, N, K) << endl;



    }

    

}