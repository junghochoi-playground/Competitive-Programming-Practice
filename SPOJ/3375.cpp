#include <bits/stdc++.h>
using namespace std;


int main(){
    int T; cin >> T;
    int scenario = 1;
    while(scenario <= T){
        cout<< "Scenario #" << scenario << ":" << endl;
        long long stamps, friends; cin >> stamps >> friends;
        vector<long long> amounts;
        for(int i = 0; i < friends; i++){
            int x; cin >> x;
            amounts.push_back(x);
        }
        sort(amounts.begin(), amounts.end());

        
        long long  res = 0;
        for(long long f = friends -1; f >= 0; f--){
            stamps -= amounts[f];
            res++;
            if (stamps <= 0) break;
        }
        if (stamps <= 0) cout << res << endl;
        else cout << "impossible" << endl;



        scenario++;
    }
}
