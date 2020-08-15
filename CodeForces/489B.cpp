/*
    Title: Neighbor Grid
    ID: 489C
    Problem Statement: https://codeforces.com/problemset/problem/489/C
*/

#include <bits/stdc++.h>
using namespace std;


int solve(vector<int> b, vector<int> g) {
    
    int res = 0;
    for(int i = 0; i < b.size(); i++){
        for(int j = 0; j < g.size(); j++){
            if (abs(b[i] - g[j]) <= 1){
                g[j] = 1000;
                res++;
                break;
            }
        }
    }
    
    return res;

}
int main(){
    int B; cin >> B;
    vector<int> boys(B);
    for(int i = 0; i < B; i++){
        int x; cin >> x;
        boys[i] = x;
    }

    int G; cin >> G;
    vector<int> girls(G);
    for(int i = 0; i < G; i++){
        int x; cin >> x;
        girls[i] = x;
    }

    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());
    cout << solve (boys, girls) << endl;
} 