#include<bits/stdc++.h>
void bfs(int node, vector<int> &v, vector<int> &b, vector<int> aj[]){
            queue<int> q;
            q.push(node);
            while(!q.empty()){
                auto n = q.front();
                q.pop();
                b.push_back(n);
                for(auto it : aj[n])
                     if(!v[it]){
                         q.push(it);
                         v[it] = 1;
                     }
            }
        }
vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
     vector<int> v(vertex, 0);
     vector<int> b;
    vector<int> a[vertex];
    //map<int,set<int>> a;
    for(int i=0; i<edges.size(); i++){
        int u = edges[i].first;
        int v = edges[i].second;
        a[u].push_back(v);
        a[v].push_back(u);
//          a[u].insert(v);
//          a[v].insert(u);
    }
  for(int i=0; i<vertex; i++){
       sort(a[i].begin(),a[i].end());
    }
    for(int i=0; i<vertex; i++){
        if(!v[i]){
               v[i] = 1;
             bfs(i, v, b, a);
        }
    }
 return b;
}