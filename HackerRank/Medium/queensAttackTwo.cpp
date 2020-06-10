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
    
        int hr = 0;
        if (r == qr) {
            if (c < qc && hr < c) {
                attackSpaces -= c-hr;
                hr = c;
            }
            else if (c > qc && hr < c-qc) {
                attackSpaces -= c-qc-hr;
                hr = c-qc;
            }
        }


        // Vertical Checking
        int vr=0;
        if (c == qc){
            if (r < qr && vr < c) {
                
                attackSpaces -= r-hr;
                vr = r;
            }
            else if (r > qr && vr < r-qr){

                attackSpaces -= r-qr-vr;
                vr=r-qr;
            } 
        }
        
        // Positive Diagonal Checking
        int pr=0;
        if (r + c == qr + qc) {
            if (r < qr && pr < r) {
                attackSpaces -= r-pr; 
                pr = r;
            }
            if (r > qr && pr < r){
                attackSpaces -= r-qr-pr;
                pr = r-qr;
            } 
        }
        
        // Negative Diagonal Checking
        int nr=0;
        if (r - c == qr - qc){
            if (r < qr && nr < r) {
                attackSpaces -= r-nr;
                nr = r;
            }
            if (r > qr && nr < r-qr){
                attackSpaces -= r-qr-nr;
                nr = r-qr;
            } 
        }
    }
    cout << attackSpaces <<  endl;



    

}