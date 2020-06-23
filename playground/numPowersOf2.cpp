#include <bits/stdc++.h>
using namespace std;


/*
    Simple program that lists numbers from 2 to N 
    and the number of factors 2 for each number
*/

int powersOfTwo(int n){
    int res = 0;
    while(n%2==0){
        res++;
        n/=2;
    }
    return res;
}
int main(){
    int N = 50;
    for(int i = 2; i < N; i+=2){
        cout << i << " - " << powersOfTwo(i) << endl;
    }


}
