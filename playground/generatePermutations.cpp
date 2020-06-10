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

void generatePermutationsV1(int n, vector<int>& permutation, vector<bool>& chosen ){
    if(permutation.size() == n){
        res.push_back(permutation);
        return;
    }
    for(int i = 1; i <= n; i++){
        if (chosen[i]) continue;
        chosen[i] = true;
        permutation.push_back(i);
        generatePermutationsV1(n, permutation, chosen );
        chosen[i] = false;
        permutation.pop_back();
    }
}


void generatePermutationsV2(int n){
    vector<int> v;
    for(int i = 1; i <= n; i++){
        v.push_back(i);
    }
    do{        
        res.push_back(v);
    } while(next_permutation(v.begin(), v.end()));
}

void generatePermutationsV3(int n, int start, vector<int>& permutation, vector<int>& nums){
    if (permutation.size() == n){
        res.push_back(permutation);
        return;
    }

    for(int i = start; i < n; i++){
        //Choose
        swap(nums[start], nums[i]);
        permutation.push_back(nums[start]);
        
        //Explore
        generatePermutationsV3(n, start+1, permutation, nums );

        //Unchoose
        swap(nums[start], nums[i]);
        permutation.pop_back();

    }


}




void generatePermutations(int n){
    
    //VERSION 2
    // generatePermutationsV2(n);

    // VERSION 1
    // vector<int> empty;
    // vector<bool> chosen(n, false);
    // generatePermutationsV1(n, empty, chosen);

    // VERSION 3
    vector<int> nums;
    vector<int> empty;
    for(int i = 1; i <= n; i++){
        nums.push_back(i);
    }
    generatePermutationsV3(n, 0, empty, nums );

    
}



int main(){
    generatePermutations(3);
    print2dVector(res);
}