#include <bits/stdc++.h>
using namespace std;


int main(){
    int T; cin >> T;
    while(T){
        int N; cin >> N;
        vector<int> men, women;
        for(int m = 0; m < N; m++){
            int x; cin >> x;
            men.push_back(x);
        }   

        for(int w = 0; w < N; w++){
            int x; cin >> x;
            women.push_back(x);
        }

        sort(men.begin(), men.end());
        sort(women.begin(), women.end());

        int product = 0;
        for(int i = 0; i < N; i++){
            product += men[i] * women[i];
        }

        cout << product << endl;

        T--;
    }
}