#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    
    do{
        int N,M; cin >> N >> M;
        
        for(int n = N; n <=M;  n++){
            for(int f = 2; f <= floor(sqrt(N)) + 1; f++){
                if (n%f == 0) break;
            } 
        }
        



        t--;
    } while(t > 0);
    
}