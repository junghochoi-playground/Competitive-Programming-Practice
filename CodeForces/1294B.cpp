/*
    Title: Collecting Packages
    ID: 1294B
    Problem Statement: https://codeforces.com/problemset/problem/1294B/B

*/

#include <bits/stdc++.h>
using namespace std;


void solve(vector<pair<int,int>>& packages){
    int lastx = 0, lasty = 0;
    string res = "";
    for(int i = 0; i < packages.size()-1; i++){
        pair<int,int> p1 = packages[i];
        pair<int,int> p2 = packages[i+1];

        int x1 = p1.first, y1 = p1.second, x2 = p2.first, y2 = p2.second;

        if (x1 <= x2 && y1 > y2 ){
            
            cout << "NO" << endl;
            return;
        }

        for(int i = 0; i < (x1 - lastx); i++){
            res += 'R';
        }
        for(int i = 0; i < ( y1 - lasty); i++){
            res += 'U';
        }
        lastx = x1, lasty=y1;

    }

    for(int i = 0; i < (packages[packages.size()-1].first - lastx); i++){
        res += 'R';
    }

    for(int i = 0; i < (packages[packages.size()-1].second - lasty); i++){
        res += 'U';
    }

    cout << "YES" << endl;
    cout << res << endl;
    



}
int main(){
    int T; cin >> T;
    while(T--){
        int P; cin >> P;
        vector<pair<int,int>> packages (P);
        
        for(int i = 0; i < P; i++){
            int x, y; cin >> x  >> y;
            packages[i] = {x,y};
        }

        

        sort(packages.begin(), packages.end()); 
        solve(packages);

        
    }
}