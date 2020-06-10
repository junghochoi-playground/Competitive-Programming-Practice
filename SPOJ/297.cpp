#include <bits/stdc++.h>
using namespace std;

long solve (vector<int>& stalls, int numCows, int numStalls){
    sort(stalls.begin(), stalls.end());
    int lo = 1, hi = stalls[numStalls-1] - stalls[0];
    int best = -1;
    while (lo <= hi){
        int mid = lo + (hi-lo)/2;
        int cowsPlaced = 1;
        
      
        vector<int>::iterator it=stalls.begin();
       
        while(cowsPlaced < numCows){
            
            it = lower_bound(it, stalls.end(), (*it) + mid);
            
            if (it == stalls.end()) break;
            cowsPlaced++;
        }
     
        if (cowsPlaced < numCows){
            hi = mid -1;
        } else if (cowsPlaced == numCows){
            best = mid; 
            lo = mid+1;
        } 

    

    }
    return best;


}
int main(){
    int T; cin >> T;

    while(T){
        int N, C; cin >> N >> C;
        vector<int> stalls;
        for(int i = 0; i < N; i++){
            int x; cin >> x;
            stalls.push_back(x);
        }   

        cout << solve(stalls, C, N) << endl;

        T--;
    }
}