
/*
    Title: Kefa and Park
    ID: 580C
    Problem Statement: https://codeforces.com/problemset/problem/580/C

*/

#include <bits/stdc++.h>
using namespace std;


int res = 0;
int N, M;
bool hasCat[1000001];
vector<int> tree[1000001];

void dfs(int node, int numCats, int parentNode){
    // cout << node << endl;
    if (numCats > M){
        return;
    }

    if (tree[node].size() == 1 && tree[node][0] == parentNode){
        res++;
    } else{
        for(int nextNode : tree[node]){
            if (nextNode == parentNode) continue;
            int newCats;
            if (hasCat[nextNode])
                newCats = numCats + 1;
            else
                newCats = 0;
            

            dfs(nextNode, newCats, node);
        }
    }
}


int main(){

    
    cin >> N >> M;
   
    for(int i = 1; i <= N; i++){
        bool x; cin >> x;
        hasCat[i] = x;
    }

    for(int i = 0; i < N-1; i++){
        int a, b; cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    int cats = hasCat[1] ? 1 : 0;
    // cout << "Start DFS" << endl;
    dfs(1, cats, -1);
    cout << res << endl;






}