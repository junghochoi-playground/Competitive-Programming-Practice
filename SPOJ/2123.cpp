#include <bits/stdc++.h>
using namespace std;


int main(){
    int N;
    cin >> N;
    while(N!=-1){
        long long sum = 0;
        unordered_map<long long, long long> values;
        for(int i = 0; i < N; i++){
            int candy; cin >> candy;
            sum += candy;
            if (values.count(candy)) values[candy]++;
            else values[candy] = 1; 
        }

        if (sum % N != 0){
            cout << -1 << endl;
            cin>>N;
            continue;
        } 
        long long mean = sum / N;
    
        int numMoves = 0;
        for(auto it = values.begin(); it != values.end(); it++){
            if (it->first < mean) {
                numMoves += it->second * (mean - it->first);
            }
                
        }

        cout << numMoves << endl;
        cin>>N;
    }


}


   
