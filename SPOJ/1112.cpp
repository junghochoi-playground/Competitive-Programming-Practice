#include <bits/stdc++.h>
using namespace std;




int xy (int n){
    if (n % 2 == 0) return 2 * n;
    else  return 2* n -1;
}

int main(){
    // cout << "Program started" << endl;
    int tests; cin >> tests;

    for(int t = 0; t < tests; t++){
        int x, y; cin >> x >> y;

        if (x!=y && x-2!=y) {
            cout << "No Number" << endl;
        } else if (x == y){
            cout << xy(x) << endl;
        } else{
            cout << xy(y) + 2 << endl;
        }
    }
}