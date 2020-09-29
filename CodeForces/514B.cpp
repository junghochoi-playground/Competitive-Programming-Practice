
/*
    Title: Han Solo and Lazer Gun
    ID: 514B
    Problem Statement: https://codeforces.com/problemset/problem/514/B

*/

#include <bits/stdc++.h>
#define INF 1e9;
using namespace std;



int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
pair<int,int> findSlope(int x1, int y1, int x2, int y2){
    int dy = (y2-y1);
    int dx = (x2-x1);
    int greatestCommonDenominator = gcd(dy, dx);
    return {(dy/greatestCommonDenominator), (dx/greatestCommonDenominator)};
}
int main(){
    int N, gunX, gunY; cin >> N >> gunX >> gunY;
    set<pair<int,int>> slopes;
    
    int res = N;
    int xi, yi; cin >> xi >> yi;
    pair<int,int> slope = findSlope(gunX, gunY, xi, yi);
    slopes.insert(slope);

    
    for (int i = 1; i < N; i++){
        cin >> xi >> yi;
   

        slope = findSlope(gunX, gunY, xi, yi);

        if (slopes.count(slope)){
            res--;
        } else{
            slopes.insert(slope);
        }
    }

    cout << res << endl;
}