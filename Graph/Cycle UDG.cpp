// #include<bits/stdc++.h>
// bool cyclebfs(int node,vector<bool> &v, vector<int> ad[]){
//     queue<pair<int,int>> q;
//         v[node] = true;
//     q.push({node, -1});
//     while(!q.empty()){
//         int curnode = q.front().first;
//         int par = q.front().second;
//            q.pop();
//         for(auto it:ad[curnode]){
//             if(!v[it]){
//                 v[it] = true;
//                 q.push({it, curnode});
//             }
//             else if(it!=par){
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// string cycleDetection (vector<vector<int>>& edges, int n, int m)
// {
       
//       vector<bool> vi(n+1,false);
//       vector<int> adj[n+1];
//      for(int i=0; i<m; i++){
//         int u = edges[i][0];
//         int v = edges[i][1];
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//       }
//     for(int i=0/1; i</=n; i++){
//         if(!vi[i]){
//         if(cyclebfs(i,vi, adj)) return "Yes";
//          }
//     }
//     return "No";
// }
bool cycledfs(int node,int parent, vector<bool> &v, vector<int> ad[]){
        v[node] = true;
    
      for(auto it:ad[node]){
          if(!v[it]){
              if(cycledfs(it, node, v,ad)) return true;
          }
          else if(it!=parent){
              return true;
          }
      }
    return false;
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
       
      vector<bool> vi(n+1,false);
      vector<int> adj[n+1];
     for(int i=0; i<m; i++){
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
      }
    for(int i=1; i<=n; i++){
        if(!vi[i]){
        if(cycledfs(i,-1, vi, adj)) return "Yes";
         }
    }
    return "No";
}

