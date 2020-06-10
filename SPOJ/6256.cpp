#include <bits/stdc++.h>
using namespace std;


// 3 1 2 5
// 1 2 3 5

// 3 1 2
// 1 2 3 

// 2 3 8 6 1
// 1 2 4 8 6


long long merge(vector<int>& v, int leftStart, int leftEnd, int rightStart, int rightEnd){
    

    long long res = 0;


    sort(v.begin()+leftStart, v.begin()+leftEnd+1);
    sort(v.begin()+rightStart, v.begin()+rightEnd+1);

    
    // cout << "Left Start: " << leftStart << endl;
    // cout << "left End: " << leftEnd << endl;
    // cout << "Right Start: " << rightStart << endl;
    // cout << "Right End: " << rightEnd << endl;
    
    // for(auto x : v){
    //     cout << x << ' ';
    // }
    // cout << endl;

    

    int l = leftStart, r = rightStart;
    for(r; r <= rightEnd; r++){
        for(l; l <= leftEnd; l++){
            if (v[r] < v[l]) {
                res += (leftEnd-l+1);
                break;
            }
        }
    }

    

    // cout << "res: " << res << endl;
    return res;
}

long long numInversionsHelper(vector<int> &v, int start, int end){
    if (start>= end) return 0;
    int mid = start + (end-start)/2;
    long long left = numInversionsHelper(v, start, mid);
    long long right = numInversionsHelper(v, mid+1, end);
    long long connect = merge(v, start, mid, mid+1, end);

    return (left + right + connect);
}

long long numInversions(vector<int> v){
    return numInversionsHelper(v, 0, v.size()-1);
}

int main(){

    int T; cin >> T;
    while(T){
        int size, x; cin >> size;
        vector<int> v (size);
        for(int i = 0; i < size; i++){
            cin >> x;
            v[i] = x;
        }

        long long  res = numInversions(v);
        cout << res << endl;
        T--;
    }


}