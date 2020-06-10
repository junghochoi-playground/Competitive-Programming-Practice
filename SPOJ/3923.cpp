#include <bits/stdc++.h>
using namespace std;





int maxStones( vector<vector<int>>& stones,  int rows, int cols){    
    vector<int> best = stones[0];
    vector<int> temp (cols);


    for(int r = 1; r < rows; r++){



        for(int c = 0; c < cols; c++){
            int left = 0, up = 0, right = 0;

            if (c != 0) left = best[c-1];
            up = best[c];
            if (c != cols-1) right = best[c+1];

            int bestMove = max(left, max(up, right));
            temp[c] = bestMove + stones[r][c];

        }
        best = temp;
    }

    int res = 0;
    for(auto x : best){
        res = max(res, x);
    }

    return res;
}


int main(){
    int T; cin >> T;
    while(T){
     
        int r, c; cin >> r >> c;
        vector<vector<int>> stones(r, vector<int>(c));

        for(int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                int x; cin >> x;
                stones[i][j] = x;
            }
        }


    
        int res = maxStones(stones, r, c);
        cout <<  res << endl;


        T--;
    }
}