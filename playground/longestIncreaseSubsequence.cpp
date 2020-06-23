#include <bits/stdc++.h>
using namespace std;






int main(){

    vector<int> arr =  { 6,2,5,1,7,4,8,3};
    
    int length [arr.size()];
    
    int res = 0;
    for(int k = 0; k < arr.size(); k++){
        length[k] = 1;
        for(int i = 0; i < k; i++){
            if (arr[i] < arr[k]){
                length[k] = max(length[k], length[i] + 1);
            }
            
        }

        res = max(res, length[k]);
    }

    cout << res<< endl;

}