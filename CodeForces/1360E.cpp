/*
    Title: Polygon
    ID: 1360E
    Problem Statement: https://codeforces.com/problemset/problem/1360/E

*/

#include <bits/stdc++.h>
using namespace std;


void solve(vector<vector<int>> grid){
    int N = grid.size();
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if (grid[i][j] == 1){
                bool downValid = i + 1 >= N || grid[i+1][j] == 1;
                bool rightValid = j + 1 >= N || grid[i][j+1] == 1;

                if (!(downValid || rightValid)){
                    cout << "NO" << endl;
                    return;
                }

            } 
        }
    }
    cout << "YES" << endl;
}
int main(){

    int T; cin>> T;
    while(T--) {
        int N; cin >> N;
        
        vector<vector<int>> grid(N, vector<int>(N, -1));

        for(int i = 0; i < N; i++){
        
            
            char numbers[N];
            scanf("%s", &numbers);
            for(int k = 0; k < N; k++){
                grid[i][k] = numbers[k] - '0';
            }
            
            
        }

        solve(grid); 

    }
    

}

