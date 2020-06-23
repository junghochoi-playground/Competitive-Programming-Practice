#include <bits/stdc++.h>
using namespace std;



int main(){
 

    int T; cin >> T;
    while(T--){
        int N; cin >> N;

        if (N % 2 == 1){
            for(int i = 0; i < N; i++){
                for(int j = N * i + 1; j <= N*(i+1); j++){
                    cout << j << ' ';
                }

                cout << endl;
            }
        }


        else {
            bool normal = true;
            for(int i = 0; i < N; i++){

                if (normal){
                    for(int j = N * i + 1; j <= (N*i) + N; j++){
                        cout << j << ' ';
                    }
                }

                else {
                    for(int j = N*(i+1); j >=N*i+1; j--){
                        cout << j << ' ';
                    }
                }

                normal = !normal;
                cout << endl;
            }



        }
    }
}

