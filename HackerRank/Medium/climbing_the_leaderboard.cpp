#include <bits/stdc++.h>
using namespace std;

int main(){

    // cout << "Program Started: " << endl;
    // INPUT

    
    int N, M;
    cin >> N;
    // cout << N;
    int leaderboard[N];
    for (int i = 0; i < N; i++){
        cin >> leaderboard[i];
    }

    cin >> M;
    int alice[M];
    for (int i = M-1; i >=0; i--){
        cin >> alice[i];
    }

    // ALGORITHM

    int lastScore = leaderboard[0];
    int currentRank = 1;
    int index = 0;
    stack<int> answer;


    for (int i = 0; i < M; i++){
        while(alice[i] < leaderboard[index] && index < N){
            index+=1;
         
            if (leaderboard[index] != lastScore){
                currentRank += 1;
                lastScore = leaderboard[index];   
            }
        }
     

        answer.push(currentRank);
    }

    while(!answer.empty()){
        
        cout << answer.top() << endl;
        answer.pop();
    }
    


    

}