/*

    Title: Longest Path in tree
    Problem Statement: https://www.spoj.com/problems/PT07Z/
    ID: 1437

*/


#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;




// First = LongestNode
// Second = LongestLength
pair<int,int> furthestNode(vector<bool>& visited, int node, int prev, int length){
    if (visited[node]) 
        return {prev, length-1};
    
    visited[node] = 1;
    int longestNode = -1, longestLength = -1;
    for(int i = 0; i < adj[node].size(); i++){
        pair<int,int> res = furthestNode(visited, adj[node][i], node, length+1);
        if(res.second > longestLength){
            longestNode = res.first;
            longestLength = res.second;            
        }
    }
    return {longestNode, longestLength};
}
int main(){
    int N; cin >> N;
    if (N == 1) {
        cout << 0 << endl;
    } else{
        adj = vector<vector<int>> (N+1, vector<int>());
        int lines = N-1;
        while(lines--){
            int u, v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int res = 0;
        vector<bool> visited(N+1, 0);
        pair<int,int> A = furthestNode(visited, 1, -1, 0);
        // cout << A.first << ' ' << A.second << endl;
        fill(visited.begin(), visited.end(), 0);
        pair<int,int> B = furthestNode(visited, A.first, -1, 0);
        cout << B.second << endl;


    }

}