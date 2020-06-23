#include <bits/stdc++.h>
using namespace std;


int solve(string row){
    int res = 0;
    int i = 1;
    
    while (i < row.length()){
        if (row[i] != row[i-1]){
            res++;
            i+=2;
        } else{
            i+=1;
        }
    }

    return res;
    

}

int main(){
    int T; cin >> T;
    while(T--){
        string x; cin >> x;
        if (x.length() == 0 || x.length() == 1) cout << 0 << endl;
        else cout << solve(x) << endl;
    }
}