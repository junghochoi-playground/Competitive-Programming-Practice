
/*
    Title: Pair of Topics
    ID: 1324B
    Problem Statement: https://codeforces.com/problemset/problem/1324/D

*/

#include <bits/stdc++.h>
using namespace std;


long long N;
vector<long long> T;
vector<long long> S;
vector<long long> D;


void solve(){

    sort(D.begin(), D.end());
    
    long long res = 0;
    long long i = 0; 
    while( i < N && D[i] <= 0){
        vector<long long>::iterator it = upper_bound(D.begin(), D.end(), -D[i]);
        if (it != D.end()){
            long long index = it - D.begin();
            
            res += N - index;
        }
        i++;
    }

    while (i < N){
        res += N - 1 -i;
        i++;
    }
    cout << res << endl;    


}


int main(){
    cin >> N;


    for(long long i = 0; i < N; i++){
        long long x; cin >> x;
        T.push_back(x);
    }

    for(long long i = 0; i < N; i++){
        long long x; cin >> x;
        S.push_back(x);
    }
    for(long long i = 0; i < N; i++){
        D.push_back(T[i]-S[i]);
    }

    solve();

}
