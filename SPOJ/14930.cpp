#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; cin >> T;
    int caseNum = 1;
    while(caseNum <= T){
        int size; cin >> size;
        vector<long long> gold;
        for(int i = 0; i < size; i++){
            long long x; cin >> x;
            gold.push_back(x);
        }
        if (size == 0) {
             cout << "Case " << caseNum << ": " << 0 << endl;
        }   
        else if (size == 1){
            cout << "Case " << caseNum << ": " << gold[0]<< endl;
        } else{
            long long  twoStepsAgo = gold[0];
            long long oneStepsAgo = max(gold[0], gold[1]);

            for(int i = 2; i < gold.size(); i++){
                long long bestStep = max(oneStepsAgo, gold[i] + twoStepsAgo);
                twoStepsAgo = oneStepsAgo;
                oneStepsAgo = bestStep;
            }
        

        
            cout << "Case " << caseNum << ": " << oneStepsAgo << endl;
        }
        caseNum++;
    }
}