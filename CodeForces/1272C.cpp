/*
    Title: books
    ID: 279B
    Problem Statement: https://codeforces.com/problemset/problem/1272/C

*/

#include <bits/stdc++.h>
using namespace std;



int main(){
    int N, K; cin >> N >> K;
    string S; cin >> S;
    unordered_set<char> allowed;

    char c;
    for(int i = 0; i < K; i++){
        cin >> c;
        allowed.insert(c);
    }

    long long res = 0, increment = 1;
    for(int i = 0; i < S.length(); i++){
        char c = S[i];
        if (allowed.count(c)){
            res += increment++;
        } else{
            increment = 1;
        }
    }
    cout << res << endl;


}

/*
int main(){
    int N, K; cin >> N >> K;
    string S; cin >> S;
    unordered_set<char> allowed;

    char c;
    for(int i = 0; i < K; i++){
        cin >> c;
        allowed.insert(c);
    }
    bool DP[N][N]; memset(DP, false, sizeof(DP));


    int res = 0;
    for(int i = 0; i < N; i++){
        for(int j = i; j < N; j++){
            char c = S[j];
            if (allowed.count(c)){
                res++;
            } else{
                break;
            }

        }
    }
    cout << res << endl;
}
*/