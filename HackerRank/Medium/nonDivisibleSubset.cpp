#include <bits/stdc++.h>
using namespace std;

int main(){
    int S, K; cin >> S >> K;
    int remainders[K] = {0};

    for (int i = 0; i < S; i++){
        int num; cin >> num;
        if (num%K == 0) {

            remainders[0] = 1;
        } else if (K%2==0 && num%K == K/2){
            remainders[K/2] = 1;
        } else{
            remainders[num%K] += 1;
        }
        
    }





    int size = (K%2==0) ? remainders[0] + remainders[K/2] : remainders[0];
    int halfWayPoint = (K%2==0) ?  K/2 : K/2+1;
    for (int i = 1; i < halfWayPoint; i++){
        size += max(remainders[i], remainders[K-i]);
    }  
    cout << size << endl;






}