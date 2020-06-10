#include <bits/stdc++.h>
using namespace std;


int main(){

    int T; cin >> T;

    while(T--){
        long long N; cin >> N;
        long long remainder = 0;
        for(int i = 0; i < N; i++){
            long long x; cin >> x;
            remainder = (remainder+x)%N;
        }

        if (remainder == 0){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    }   

}