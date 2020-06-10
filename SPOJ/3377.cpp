#include <bits/stdc++.h>
using namespace std;


vector<int> adj[2001];
short int gender[2001];
int bugs, interactions;


bool dfs (int a){
    bool res = true;
    for(auto b : adj[a]){
        if (gender[a] == gender[b]) return false;
        else if (gender[b] == 0){
    
            gender[b] = -gender[a];
            res = res && dfs(b);

        }
    }

    return res;

    
}


int main(){


    int T; cin >> T;
    int scenario = 1;
    while(scenario <= T){
        cin >> bugs >> interactions;
        for(int i = 0; i < bugs; i++){
            gender[i] = 0;
            adj[i].clear();
        }



        for(int i = 0; i < interactions; i++){
            int a, b; cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }


        


        bool res = true;
        for(int i = 1; i <= bugs; i++){
            if (gender[i] == 0){
                gender[i] = 1;
                res = res && dfs(i);
            }
        }
        cout << "Scenario #" << scenario << ":" << endl;
        if(res) cout << "No suspicious bugs found!" << endl;
        else cout << "Suspicious bugs found!" << endl;





        scenario++;
    }
}