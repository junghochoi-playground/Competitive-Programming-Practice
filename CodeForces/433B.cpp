/*
    Title: Kuriyama Mirai's Stones
    ID: 433B
    Problem Statement: https://codeforces.com/problemset/problem/433/B

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N; cin >> N;
    vector<long long> regular(N), sorted(N);
    for(long long i = 0; i < N; i++){
        long long x; cin >> x;
        regular[i] = x;
        sorted[i] = x;
    }

    sort(sorted.begin(), sorted.end());


    vector<long long> regsum(N), sortsum(N);

    long long sum = 0; 
    for(long long i = 0; i < N; i++){
        sum += regular[i];
        regsum[i] = sum;
    }   

    sum = 0;
    for(long long i = 0; i < N; i++){
        sum += sorted[i];
        sortsum[i] = sum;
    }   
    long long M; cin >> M;
    for(long long i = 0; i < M; i++){
        long long type, L, R; cin >> type >> L >> R;
        L--; R--;

        long long res = -1;
        if (type == 1){
            if (L==0) res = regsum[R];
            else res = regsum[R] - regsum[L-1]; 
        } else if (type == 2){
            if (L==0) res = sortsum[R];
            else res = sortsum[R] - sortsum[L-1];

        }
        cout << res << endl;
    }


    

}