#include <bits/stdc++.h>
using namespace std;
  

void printVector(vector<int>& a) {
    for(auto x : a){
        cout << x << ' ';
    }
    cout << endl;
}

int main (){ 
    // bitset<10> s ("1011111010");
    // cout << s[4] << endl;


    vector<int> a = {0};
    vector<int> b = {0};
    // vector<int> a = {2 , 6, 6, 6, 9, 0, 3, 0, 7, 1};
    // vector<int> b = {10, 3, 6, 0, 0, 5, 5, 10, 2, 8};
                   // 0,1,2,3,6,6,6,7, 8, 9
                   // 0,0,2,3,5,5,6,9,10,10
                   // 0,2,3,4,9
                   // 5

    

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    printVector(a);
    printVector(b);

    int ai = 0, bi =0, previous = INT_MIN;
    vector<int> res;
    while(ai < a.size() && bi < b.size()){
        
        if (a[ai] == b[bi]) {
            if (a[ai] != previous){
                res.push_back(a[ai]);
                previous = a[ai];
            }
            
            ai++;
            bi++;
        } else if (a[ai] > b[bi]){
            bi++;
        } else{
            ai++;
        }

    }
    printVector(res);



}


vector<vector<int>> ans;
