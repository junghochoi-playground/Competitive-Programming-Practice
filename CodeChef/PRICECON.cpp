#include <bits/stdc++.h>
using namespace std;
  

int main(){
    int T; cin >> T;
    while(T--){
        int N, K; cin >> N >> K;   
        int res = 0;
        for(int i = 0; i < N; i++){
            int price; cin >> price;
            if (price > K){
                res += price-K;
            }
        }

        cout << res << endl;

    }
}