/*
    Title: Nastya and Door
    ID: 1341B
    Problem Statement: https://codeforces.com/problemset/problem/1314/B 

*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    // Input

    int T; cin >> T;
    while(T--) {
        int N, K; cin >> N >> K;
        vector<int> mountains(N);
        for(int i = 0; i < N; i++){
            int x; cin >> x;
            mountains[i] = x;
        }

        // Finding the peaks
        vector<bool>peaks(N-2, false);
        for(int i = 0; i < N-2; i++){
            int mountIndex = i+1;
            if (mountains[mountIndex] > mountains[mountIndex-1] && mountains[mountIndex] > mountains[mountIndex+1]){
                peaks[i] = 1;
            }
        }

        // cout << "  ";
        // for(int i = 0; i < peaks.size(); i++) {
        //     if(peaks[i]) cout << 1 << ' ';
        //     else cout << 0 << ' ';
        // }
        // cout << endl;

        
        // Sliding Window Initializer

        int length = K-2;
        int resPeaks = 0, resPosition = 0;
        int windowPeaks = 0;
        for(int i = 0; i < length; i++){
            if (peaks[i]) windowPeaks++;
        }
        resPeaks = max(resPeaks, windowPeaks);

        // cout << (length-1) << ' ' << resPeaks << ' ' << resPosition << endl;

        for(int i = length; i < peaks.size(); i++){
            if(peaks[i]) windowPeaks++;
            if(peaks[i-length]) windowPeaks--;
            if (windowPeaks > resPeaks){
                resPeaks = windowPeaks;
                resPosition = i-length+1;
            }
            // cout << i << ' ' <<  resPeaks << ' ' << resPosition << endl;
        }



        // cout << "\n\nAnswer: " << endl;
        cout << (resPeaks+1) << ' ' << (resPosition + 1) << endl;





    }
    
    

    


    
}