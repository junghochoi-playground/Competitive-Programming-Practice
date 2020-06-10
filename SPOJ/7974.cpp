#include <bits/stdc++.h>
using namespace std;


int main(){


    int a, b, c; cin >> a >> b >> c;
    
    while(!(a == 0 && b == 0 && c == 0)){
        int diff1 = b-a, diff2 = c-b;
        if (diff1 == diff2){
            cout << "AP " << (c+diff1) << endl;;
        } else{
            double ratio = (double)b/ (double)a;
            cout << "GP " << (c * ratio) << endl;
        }

        cin >> a >> b >> c;
    }


}