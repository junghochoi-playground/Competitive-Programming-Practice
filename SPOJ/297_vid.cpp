
#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> stalls, int numCows, int numStalls){
    sort(stalls.begin(), stalls.end());

    int lo = 1, hi = stalls[numStalls - 1] - stalls[0];
    int res = -1;

    while(lo <= hi){
        int mid = lo + (hi-lo)/2;


        int cowsPlaced = 1;
        vector<int>::iterator it = stalls.begin();
        while(cowsPlaced < numCows){

            it  = lower_bound(it, stalls.end(), (*it) + mid);

            if (it == stalls.end()) break;
            cowsPlaced++;
        }

        if (cowsPlaced == numCows){
            lo = mid+1;
            res = mid;
        } else if (cowsPlaced < numCows){
            hi = mid-1;
        }
    }

    return res;

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