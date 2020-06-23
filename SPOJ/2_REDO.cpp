#include <bits/stdc++.h>
using namespace std;


//
void simpleSieve(int limit, vector<int>& primes){

    bool mark[limit]; memset(mark, true, sizeof(mark));
    mark[0] = false; mark[1] = false;

    for( int  factor = 2; factor <= sqrt(M); factor++){
        if (!mark[factor]) continue;

        for( int  i = 2 * factor; i <= M; i += factor){
            primes.push_back(i);
        }
    }
}

int main(){
    int T; cin >> T;
    while(T--){
        int N, M; cin >> N >> M;
        vector<int> primes;
        int limit = floor(sqrt(M)) + 1;
        simpleSieve(limit, primes);




        vector<bool> primes(M - + 1, true);
     



        for( int i = N; i <= M; i++){
            if (primes[i]) cout << i << ' ';
        }
        cout << endl;
    }
}