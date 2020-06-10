#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, k, qr, qc; cin >> n >> k >> qr >> qc;
    int attackSpaces = 0;
    


    // Horizontal and Vertical
    attackSpaces += 2 * (n-1);
    // Rows = (n-qr) + qr - 1

    
    /*
        BR: min(n-qr, n-qc)
        UR: min(qr-1, n-qc)
        UL: min(qr-1, qc-1)
        BL:  min(n-qr, qc-1)
    */
    attackSpaces += min(n-qr, n-qc) + min(qr-1, qc-1) + min(n-qr, qc-1) + min(qr-1, n-qc);
    


 

    for (int i = 0; i < k; i++){
      
        int r, c; cin >> r >> c;

        // cout << r << ' ' << c << endl;
        // Horizontal Checking
        if (r == qr) {
            if (c < qc) attackSpaces -= c;
            else if (c > qc) attackSpaces -= c-qc;
        }

        // Vertical Checking
        if (c == qc){
            if (r < qr) attackSpaces -= r;
            else if (r > qr) attackSpaces -= r-qr;
        }
        
        // Positive Diagonal Checking
        if (r + c == qr + qc) {
            if (r < qr) attackSpaces -= r; 
            if (r > qr) attackSpaces -= r-qr;
        }
        
        // Negative Diagonal Checking
        if (r - c == qr - qc){
            if (r < qr) attackSpaces -= r;
            if (r > qr) attackSpaces -= r-qr;
        }
    }
    cout << attackSpaces <<  endl;



    

}