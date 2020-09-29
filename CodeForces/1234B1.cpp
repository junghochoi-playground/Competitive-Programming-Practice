/*
    Title: Social Network
    Problem Statement: https://codeforces.com/problemset/problem/1234/B1
    ID: 1234B1
*/

#include <bits/stdc++.h>
using namespace std;


int main(){
    int N, K; cin >> N >> K;
    


    set<int> ids;
    queue<int> screen;
    for (int i = 0; i < N; i++){
        int id; cin >> id;
        
        if (!ids.count(id)){

            if (screen.size() == K){
                ids.erase(screen.front());
                screen.pop();
            }
            screen.push(id);
            ids.insert(id);

        }        
    }


    cout << screen.size() << endl;
    int arr[screen.size()];
    int i = screen.size() - 1;
    while(!screen.empty()){
        arr[i] = screen.front();
        i--;
        screen.pop();
    }

    for(int x : arr){
        cout << x << ' ';
    }
    cout << endl;
    
}
