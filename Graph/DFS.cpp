#include<bits/stdc++.h>
void dfs(int node, vector<int> adj[],vector<int> &candidate,vector<int> &vi ){
    candidate.push_back(node);
    vi[node] = 1;
    for(auto &it : adj[node]){
        if(!vi[it]){
         dfs(it, adj, candidate, vi);
        }
    }
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
     vector<vector<int>> dfsa;
       vector<int> c;
     vector<int> vi(V,0);
      vector<int> adj[V];
     for(int i=0; i<edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
  }
//    for(int i=0; i<V; i++){
//        sort(adj[i].begin(), adj[i].end());
//     }
    for(int i=0; i<V; i++){
        if(!vi[i])
        {
        dfs(i, adj, c, vi);
        dfsa.push_back(c);
            c.clear();
        }
    }
   return dfsa;
}