#include <bits/stdc++.h>
using namespace std;

/*
    Problem Statement;
    Given that an nxn grid,
    how many arrangements of n queens are there such that the queens cannot attack each other

    this code does not produce the correct answer
*/



const int n = 8;

int res = 0;
vector<bool> columns(n, 0), diag1(2*n-1, 0), diag2(2*n-1, 0);



void search(int row){
    if (row == n){
        res++;
        return;
    }


    for(int col = 0; col < n; col++){
        //Prevent
        if(columns[col] || diag1[col+row] || diag2[col-row+n-1]) continue;
        
        //Choose
        columns[col] = diag1[col+row] = diag2[col-row+n-1] = true;
        
        //Explore
        search(row+1);

        //Unchoose
        columns[col] = diag1[col+row] = diag2[col-row+n-1] = false;
    }


}


int main(){

    
    cout << n << endl;
    search(0);
    cout << "Answer: " << res << endl;
  






}