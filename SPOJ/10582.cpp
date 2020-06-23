#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> arr, int k){
    deque<int> window;
    vector<int> res;
    int hi = INT_MIN;
    for(int i = 0; i < k; i++){
        window.push_back(arr[i]);
        hi = max(hi, arr[i]);
    }

    res.push_back(hi);
    for(int i = k; i < arr.size(); i++){
        window.push_back(arr[i]);
        hi = max(hi, arr[i]);

        bool findNew = window[0] == hi;
        window.pop_front();

        if (findNew){
            
            int newHi = INT_MIN;
            for(auto x : window){
                newHi = max(newHi, x);
            }
            hi = newHi;
        } 
        res.push_back(hi);
    }

    return res;
}


int main(){
    int n, k;
    
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cin >> k;

    vector<int> res = solve(arr, k);  
    for(auto x : res)
        cout << x << ' ';
    cout << endl;
}