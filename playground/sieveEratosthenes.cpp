#include <bits/stdc++.h>
using namespace std;
  


vector<int> getPrimes(int n){
    bool marked[n+1];
    memset(marked, true, sizeof(marked));
    marked[0] = 0;
    marked[1] = 0;
    vector<int> primes;
    

    for(int i = 2; i < sqrt(n); i++){
        if(marked[i]) {
            for(int j = i+i; j <= n; j+=i){
                marked[j] = false;
            }
        }
        
    
    }

    for(int i = 0; i < n+1; i++){
        if (marked[i]) primes.push_back(i);
    }


    return primes;
}

int main(){
    vector<int> primes = getPrimes(100);
    // for(auto x : primes){
    //     cout << x << endl;
    // }
    cout << "Number of Prime Numbers: " <<primes.size() << endl;

}