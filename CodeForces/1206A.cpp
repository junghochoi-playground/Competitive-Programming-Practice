/*
    Title: Choose Two Numbers
    Problem Statement: https://codeforces.com/problemset/problem/1206/A    
    ID: 1206A

*/
#include <bits/stdc++.h>
using namespace std;


int main(){
    int N; cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++)
        cin >> A[i];
    
    int M; cin >> M;
    vector<int> B(M);
    for(int i = 0; i < M; i++)
        cin >> B[i];
    

    sort(A.rbegin(), A.rend());
    sort(B.rbegin(), B.rend());

    cout << A[0] << ' ' << B[0] << endl;
}


// int main(){

//     int N; cin >> N;
//     unordered_map<int,int> A;
//     for(int i = 0; i < N; i++){
//         int x; cin >> x;
//         A[x] = 1;
//     }


    
//     int M; cin >> M;
//     unordered_map<int,int> B;
//     for(int i = 0; i < M; i++){
//         int x; cin >> x;
//         B[x] = 1;
//     }

//     for(auto ap : A){
//         bool found = false;
//         for(auto bp : B){
//             int sum = ap.first + bp.first;
//             if (!A.count(sum) && !B.count(sum)){
//                 cout << ap.first << ' ' << bp.first << endl;
//                 found = true;
//                 break;
//             }
//         }
//         if(found) break;
//     }


  
// }
