#include <bits/stdc++.h>
using namespace std;

int main(){
    int e; cin >> e;

    int sum = 0;
    for(int i = 0; i < e; i++){
        int n; cin >> n;
        sum += n;
    }

    int error = sum;
    for(int i = 0; i < e-1; i++){
        int n; cin >> n;
        error -= n;
    }

    int error2 = sum - error;
    for(int i = 0; i < e-2; i++){
        int n; cin >> n;
        error2 -= n;
    }
    cout << error << endl << error2<<endl;
    



}