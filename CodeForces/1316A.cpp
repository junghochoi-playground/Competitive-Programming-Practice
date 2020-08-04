/*
    Title: Removing Duplicates
    ID: 1316A
    Problem Statement: http://codeforces.com/problemset/problem/1316/A

#include <bits/stdc++.h>
using namespace std;


/*
Input: 
2
4 10
1 2 3 4
4 5
1 2 3 4


Output:
10
5
*/
// 2
// 4 10
// 1 2 3 4
// 4 5
// 1 2 3 4


int solve(vector<int> scores , int maxScore){
    int rest = 0;
    for(int i = 1; i < scores.size(); i++){
        rest += scores[i];
    }
    return min(maxScore, rest + scores[0]);
}

int main(){
    int T; cin >> T;
    while(T--){
        int N, M; cin >> N >> M;
        vector<int> scores;
        for(int i = 0; i < N; i++){
            int x; cin >> x;
            scores.push_back(x);
        }
        cout << solve(scores, M) << endl;
    }
}