#include <bits/stdc++.h>
using namespace std;


string solve(string str, int numCols){
    string res = "";
    int numRows = str.length()/numCols;

    for(int col = 0; col < numCols; col++){
        int row = 0;
        while(row < numRows){
            if (row % 2 == 0){
                char add = str[col + numCols * row];
                res += add;
            } else{
                char add = str[(row*numCols) +(numCols-col-1)];
                res += add;
            }

            row++;
        }

    }
    return res;


    
}
int main(){     

    int C; cin >> C;
    while(C){
        string S; cin >> S;
      
        cout << solve(S, C) << endl;
        cin >> C;
    }
}