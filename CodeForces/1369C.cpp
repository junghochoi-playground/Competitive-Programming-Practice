/*
    Title: Rationalee
    Problem Statement: https://codeforces.com/problemset/problem/1369/C    
    ID: 1369C

*/

#include <bits/stdc++.h>
using namespace std;



long long solve(vector<long long>& nums, vector<long long>& recieve){
    sort(nums.begin(), nums.end());
    sort(recieve.begin(), recieve.end());

    int i = 0, j = nums.size() - 1;
    long long res = 0;

    for(int w : recieve){
        if (w == 1){
            res += 2 * nums[j--];
        }
        if (w == 2){
            res += nums[j--] + nums[i++];
        }
        if (w > 2){
            res += nums[j--] + nums[i];
            i += w - 2 + 1;
        }
    }

    return res;


}
int main(){

    int T; cin >> T;
    while(T--){
        int N, K; cin >> N >> K;

        vector<long long> nums(N);
        vector<long long> recieve(K);

        for(int i = 0; i < N; i++){
            long long x; cin >> x;
            nums[i] = x;
        }

        for(int i = 0; i < K; i++){
            long long x; cin >> x;
            recieve[i] = x;
        }

        cout << solve(nums, recieve) << endl;




    }
}