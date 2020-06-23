#include <bits/stdc++.h>
using namespace std;


int powersOfTwo(int n){
    int res = 0;
    while(n%2==0){
        res++;
        n/=2;
    }
    return res;
    
}

int main(){
    int T; cin >> T;
    while(T--){
        long long  TS; cin >> TS;
        while(TS % 2 == 0){
            TS/=2;
        }

        cout << (TS/2) << endl;
    }
    
}

