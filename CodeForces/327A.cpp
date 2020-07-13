    /*
        Title: Flipping Coins
        ID: 327A
        Problem Statement: https://codeforces.com/problemset/problem/327/A
    */

    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        int N; cin >> N;

        
        vector<int> C(N);
        for(int i = 0; i < N; i++){
            cin >> C[i];
        }

        
        int DP[N][N]; memset(DP, -2, sizeof(DP));
        int initialOnes = 0, res = 0;
        for(int i = 0; i < N; i++){
            if (C[i] == 1) {
                initialOnes++;
                DP[i][i] = -1;
            }

            else {
                DP[i][i] = 1;
                res = 1;
            }
        }

        if (initialOnes == N){
            cout << (initialOnes-1) << endl;
        } else{
            for(int L = 2; L <= N; L++){
                for(int i = 0; i <= N-L; i++){
                    int j = i+L-1;

                    int addIndex = C[j] == 1 ? -1 : 1;
            

                    int sub = addIndex +  DP[i][j-1];
                    res = max(res, sub);
                    DP[i][j] = sub;

            

                }
            }
        // for(int i = 0; i < N; i++){
        //     for(int j = 0; j < N; j++){
        //         cout << DP[i][j] << ' ';
        //     }
        //     cout << endl;
        // }

        // cout << res << endl;
        // cout << "Res:" << res << endl;
        // cout << "InitOne: " << initialOnes << endl;
        cout << (res + initialOnes) << endl;
        }

        
  

    




        

        

    }
