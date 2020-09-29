
/*
    Title: Kefa and Company
    ID: 580B
    Problem Statement: https://codeforces.com/problemset/problem/580/B

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int main(){
    long long N, D; cin >> N >> D;
    vector<pair<long long, long long>> F(N);

    for(int i = 0; i < N; i++){
        long long m, s; cin >> m >> s;
        F[i] = {m,s};
    }

    sort(F.begin(),F.end());


    long long maxFF = -1;
    long long currFF = 0;
    int i = 0, j = 0;
    
    while(j < N){
        if (abs(F[i].first - F[j].first) < D){
            currFF += F[j].second;
            j++;
        } else {
            maxFF = max(maxFF, currFF);
            currFF -= F[i].second;
            i++;
        }
    }

    cout << max(maxFF, currFF) << endl;
    }
