/*
    Title: Removing Duplicates
    ID: 978A
    Problem Statement: http://codeforces.com/problemset/problem/978/A
*/

#include <bits/stdc++.h>
using namespace std;


/*
Input: 
6
1 5 5 1 6 1 

Output:
3
5 6 1   

*/

stack<int> solve(vector<int> arr){ 
    unordered_set<int> duplicates;
    stack<int> s;
    for(int i = arr.size()-1; i >=0; i--){
        int n  = arr[i];
        if (duplicates.find(n) != duplicates.end())
            continue;
        duplicates.insert(n);
        s.push(n);


    }
    return s;

}
int main(){

    int N, x; cin >> N;
    vector<int> arr (N);
    for (int i = 0; i < N; i++){
        cin >> x;
        arr[i] = x;
    }

    stack<int> res = solve(arr);
    int size = res.size();
    cout << res.size() << endl;
    for (int i = 0; i < size; i++){
        int ans = res.top(); res.pop();
        cout << ans << ' ';
    }
    cout << endl;

}