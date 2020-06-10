#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;

    int res = 0;
    for(int n = 1; n <= N; n++){
        // cout << "N: " << n << endl;
        for(int i = 1; i <=sqrt(n); i++){
            if (n % i == 0){
                // cout << "(" << i << "," << (n/i) << ")" << endl;
                res++;
            }
        }
    }
    cout << res << endl;
}