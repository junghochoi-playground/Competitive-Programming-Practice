#include <bits/stdc++.h>
using namespace std;
  

string solve(int numCustomers, vector<int> coins){
    map<int,int> revenue{
        {5,0},
        {10,0},
        {15,0}
    };

    for(auto c : coins){
        if (c==5) {
            revenue[5]++;
        }
        else if (c==10){
            if(revenue[5] == 0) return "NO";
            else {
                revenue[5]--;
                revenue[10]++;
            }
        }
        else if (c==15){
            if (revenue[10] < 1 && revenue[5] < 2) return "NO";
            else {
                if (revenue[10] >= 1) revenue[10]--;
                else if (revenue[5] >= 2) revenue[5] -= 2;
                revenue[15]++;
            }
        }
    }

    return "YES";
     
    
}

int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> customers;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            customers.push_back(x);
        }

        cout << solve(n, customers) << endl;
    }
}