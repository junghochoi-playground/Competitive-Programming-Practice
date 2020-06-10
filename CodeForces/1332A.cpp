#include <bits/stdc++.h>
using namespace std;
    

int main(){
    int tests; cin >> tests;

    for (int i = 0; i < tests; i++){
        int a, b, c, d; cin >> a >> b >> c >> d;
        int x, y, x1, y1, x2, y2; cin >> x >> y >> x1 >> y1 >> x2 >> y2;

        int horizontal = b-a;
        int vertical = d-c;

        if (x+horizontal < x1 || x+horizontal > x2 || y+vertical <y1 || y+vertical > y2) cout << "No" << endl;
        else if (x1 == x2 && (a > 0 || b > 0) || y1==y2 && (c>0 || d>0)) cout << "No" << endl;
        else cout << "Yes" << endl;
    }



    

}