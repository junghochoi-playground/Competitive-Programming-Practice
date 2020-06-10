#include <bits/stdc++.h>
using namespace std;
  

void printVector(vector<int>& a) {
    for(auto x : a){
        cout << x << ' ';
    }
    cout << endl;
}

void print2dVector(vector<vector<int>>& a){
    for(auto v : a){
        for (auto x : v)
            cout << x << ' ';
        
        cout  << endl;
    }
    cout << endl;
}

vector<vector<int>> res;

void generateSubsetSearch(int k, int n, vector<int>& subset){

    
    res.push_back(subset);
    for(int i = k; i <= n; i++){

        subset.push_back(i);
        generateSubsetSearch(i+1, n, subset);
        subset.pop_back();    
    }
}

void generateSubsetSearchV2(int k, int n, vector<int>& subset){
    if (k > n) {
        res.push_back(subset);
        return; 
    }
    

    generateSubsetSearchV2(k+1, n, subset);
    subset.push_back(k);
    generateSubsetSearchV2(k+1, n, subset);
    subset.pop_back();

}


void generateSubsets(int n){
    vector<int> subset;
    // generateSubsetSearch(1, n, subset);
     generateSubsetSearchV2(1, n, subset);
}

int main (){ 
    generateSubsets(3);
    print2dVector(res);
}