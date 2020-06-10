#include <bits/stdc++.h>
using namespace std;

int main(){


    vector<vector<int>> cycles = {
        {0},
        {1},
        {2,4,8,6},
        {3,9,7,1},
        {4,6},
        {5},
        {6},
        {7,9,3,1},
        {8,4,2,6},
        {9,1}
    };

    int T; cin >> T;
    while(T){
        long long a, b; cin >> a >> b;
        if (b == 0 ){
            cout << 1 << endl;
        } else{
            int last = a%10;
            int pos = (b-1) % cycles[last].size();
            cout << cycles[last][pos] << endl;
        }

        T--;
    }

}