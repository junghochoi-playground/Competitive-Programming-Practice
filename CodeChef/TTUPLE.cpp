#include <bits/stdc++.h>
using namespace std;




int solve(vector<int> original, vector<int> target){

    

    /*
        multiplication is just a form of addition

        3 5 7 
        6 5 10
        (2, 3)  (1, 0)  (1, 3)

        modulus and difference

        5  6  7
        10 12 14
        (2, 5) (2, 6) (2, 7)

        4 5 3
        5 6 8
        (1, 1) (1,1) (2,5)

        Thoughts
        if two remainder numbers are the same we can subtract 1
        if all three remainder numbers are the same we can all in one step

        Multiplication is slightly different

        vector<int> 
        


    */
}

int main(){

    int T; cin >> T;
    while(T--){
        int a,b,c,d,e,f;cin >> a >> b >> c >> d >> e >> f;
        vector<int> original = {a, b, c};
        vector<int> target   = {d, e, f};

        cout << solve(original, target) << endl;
        


    }
}