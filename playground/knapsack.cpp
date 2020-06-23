#include <bits/stdc++.h>
using namespace std;


/*

    given a list of weights
    what are all the possible sums that can be formed with the weights
    
*/
vector<bool> possible;

void solve(vector<int>& weights, int totalSum){

    possible[0] = true;
    for(int k = 0; k < weights.size(); k++){
        for(int x = totalSum; x >= 0; x--){
            if (possible[x]) 
                possible[x+weights[k]] = true;
        }
    }
}



int main(){
    vector<int> weights = {1, 3, 3, 5};
    int sum = 0;
    for(int i = 0; i < weights.size(); i++){
        sum += weights[i];
    }
    possible = vector<bool>(sum+1, false);
    
    solve(weights, sum);

    for(int i = 0; i < possible.size(); i++){
        if (possible[i]){
            cout << i << ' '; 
        }
    }
    
}