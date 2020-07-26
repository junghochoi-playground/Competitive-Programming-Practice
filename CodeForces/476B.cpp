/*

*/

#include <bits/stdc++.h>
using namespace std;

int solutions(int remaining, int val, int target){
    if (remaining == 0){
        if (val == target) return 1;
        return 0;
    }
    
    int neg = solutions(remaining-1, val-1, target);
    int pos = solutions(remaining-1, val+1, target);
    return neg + pos;
}

int main(){
    string A, B; cin >> A >> B;
    int res = 0;
    for(int i = 0; i < A.length(); i++){
        char c = A[i];
        if (c == '+') res++;
        else res--;
    }
    
    int unknown = 0;
    int pos = 0;
    for(int i = 0; i < B.length(); i++){
        char c = B[i];
        if (c == '+') pos++;
        else if (c == '-') pos--;
        else unknown++;
    }

    if (unknown == 0) {
        if (pos == res) {
            cout << 1 << endl;
        } else{
            cout << 0 << endl;
        }
    } else{
        int diff = res - pos;
        long double numPermutations = pow(2, unknown);
        long double numSolutions = solutions(unknown, 0, diff);
        long double ans = numSolutions / numPermutations;

        cout << fixed;
        cout << setprecision(10);
        cout << ans << endl;
    }


}