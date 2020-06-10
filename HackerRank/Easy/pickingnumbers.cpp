#include <bits/stdc++.h>
using namespace std;

int main(){

    
   
    int n; cin >> n;
    int nums[100] = {0};

    for (int i = 0 ; i < n; i++){
        int element; cin >> element;
        nums[element] +=1;
    }

    int maxNums = 0;
    
    for (int i = 0; i <=99; i++){
    
        
        if (nums[i] !=0 && nums[i+1] !=0){
            maxNums = max((nums[i]+ nums[i+1]), maxNums);
        } else if (nums[i]!=0){
            maxNums = max(nums[i], maxNums);
        }
    }

    cout << maxNums << endl;

}