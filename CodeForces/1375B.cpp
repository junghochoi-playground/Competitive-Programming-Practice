/*
    Title: Neighbor Grid
    ID: 1375B
    Problem Statement: https://codeforces.com/problemset/problem/1375/B
*/

#include <bits/stdc++.h>
using namespace std;


void solve(vector<vector<int>>& grid, int N, int M){
    for(int r = 0; r < N; r++){
        for(int c = 0; c < M; c++){
            if (grid[r][c] == 0) continue;

            vector<pair<int,int>> dir =  {{1,0},{-1,0},{0,1},{0,-1}};
            int numNeighbors;
            if (r == 0 && c == 0 || r == N-1 && c == 0 || r == 0 && c==M-1 || r == N-1 && c == M-1){
                numNeighbors = 2;
            } else if (r == 0 || r == N-1 || c == 0 || c == M-1) {
                numNeighbors = 3;
            } else{
                numNeighbors = 4;
            }


            if (numNeighbors < grid[r][c]){
                cout << "NO" << endl;
                return;
            }
  




        }
    }
    cout << "\t";
    cout << "YES" << endl;
    for(int r = 0; r < N; r++){
        for(int c = 0; c < M; c++){
            if (r == 0 && c == 0 || r == N-1 && c == 0 || r == 0 && c==M-1 || r == N-1 && c == M-1){
                cout << 2 << ' ';
            } else if (r == 0 || r == N-1 || c == 0 || c == M-1) {
                cout << 3 << ' ';
            } else{
                cout << 4 << ' ';
            }
 
        }
        cout << endl;
    }
} 
int main(){
    int T; cin >> T;
    while(T--){
        int N, M; cin >> N >> M;
        vector<vector<int>> grid (N, vector<int>(M));
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                int x; cin >> x;
                grid[i][j] = x;
            }
        }

        solve(grid, N, M);

    }
}