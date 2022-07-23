#include<bits/stdc++.h>

//in interview better to explain dfs solutin than bfs
//kahn's algorithm
int detectCycleInDirectedGraph(int n, vector<pair<int, int >> &edges) {
      queue<int> q;
      vector<int> in(n+1,0);
      vector<int> adj[n+1];
     for(int i=0; i<e; i++){
        int u = edges[i].first;
        int v = edges[i].second;
         in[v]++;
        adj[u].push_back(v);
      }
    for(int i=1; i<=n; i++){
        if(in[i]==0){
            q.push(i);
        }
    }
    int cnt = 0;
    while(!q.empty()){
        int node = q.front();
        cnt++;
        q.pop();
        for(auto it: adj[node]){
            in[it]--;
            if(in[it]==0){
                q.push(it);
            }
        }
    }
 if(cnt==n) return 0;
    return 1;   
}
// bool cycledfs(int node, vector<int> &v,vector<int> dfsv, vector<int> aj[]){
//           v[node]=1;
//           dfsv[node]=1;
//         for(auto it : aj[node]){
//                      if(!v[it]){
//                          if(cycledfs(it, v, dfsv,aj)) return true;
//                      }
//                       else if(dfsv[it] && v[it]){
//                          return true;
//                      }
//              }
//     dfsv[node]=0;
//     return false;
//    }
// int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
//         int e= edges.size();
//     vector<int> vi(n+1,0);
//     vector<int> dfsv(n+1,0);
//       vector<int> adj[n+1];
//      for(int i=0; i<e; i++){
//         int u = edges[i].first;
//         int v = edges[i].second;
//         adj[u].push_back(v);
//   }
//   for(int i=1; i<=n; i++){
//         if(!vi[i]){
//         if(cycledfs(i, vi,dfsv, adj)) return 1;
//   }
//   }
//     return 0;
// }