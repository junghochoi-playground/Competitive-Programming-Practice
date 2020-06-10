#include <bits/stdc++.h>
using namespace std;


int main(){

    int N; cin >> N;
    while(N!= -1){

        int cells = 1, level = 1;
        while(cells < N){
            cells = cells + level * 6;
            level++;
        }
        if (cells == N){
            cout << "Y" << endl;
        } else{
            cout << "N" << endl;
        } 

        cin >> N;

    }
}