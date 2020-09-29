/*
    Title: Just Eat it!
    Problem Statement: https://codeforces.com/problemset/problem/1285/B    
    ID: 1285B

*/
#include <bits/stdc++.h>
using namespace std;



void solve(vector<long long> taste){
    long long prefixSum = 0;
    for(int i = 0; i < taste.size(); i++){
        prefixSum += taste[i];
        if (prefixSum <= 0){
            cout << "NO" << endl;
            return;
        }
    }

    long long suffixSum = 0;
    for(int i = taste.size()-1; i >=0; i--){
        suffixSum += taste[i];
        if (suffixSum <= 0){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    
}

int main(){
    int T; cin >> T;
    while(T--){
        int N; cin >> N;
        vector<long long> taste(N);

        for(int i = 0; i < N; i++){
            int x; cin >> x;
            taste[i] = x;
        }

        solve(taste);
        

    }
}


/*
void solve(vector<long long> taste, vector<long long> accum, long long yasserSum){
    int N = taste.size();
    for(int K = 1; K <= N-1; K++){
        for(int i = 0; i+K-1 < N; i++){

            int j = i + K - 1;
            // cout << accum[j] << endl;
            long long adelSum;
            if (i == 0){
                adelSum = accum[j];
            } else{
                adelSum = accum[j] - accum[i-1];
            }

            // cout << i << ' ' << j << endl;
            // cout << "adelSum: " << adelSum << endl;
            if (adelSum >= yasserSum){
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
    
}
int main(){


    int T; cin >> T;
    while(T--){
        int N; cin >> N;
        vector<long long> taste(N);

        long long yasserSum = 0;
        for(int i = 0; i < N; i++){
            int x; cin >> x;
            taste[i] = x;
            yasserSum += x;
        }

        vector<long long> accum(N);
        long long sum = 0;
        for(int i = 0; i < N; i++){
            sum += taste[i];
            accum[i] = sum;
        }

        
        
        // cout << yasserSum << endl;
        solve(taste, accum, yasserSum);

        
    }




}

*/
