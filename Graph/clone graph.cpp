void dfs(graphNode *node,vector<graphNode*> &visited, graphNode* &root){
       for(auto it : node->neighbours){
        if(visited[it->data]==NULL){
           graphNode* newNode = new graphNode(it->data); 
            visited[it->data] = newNode;
            (root->neighbours).push_back(newNode);
            dfs(it,visited,newNode);
        }
        else{
            (root->neighbours).push_back(visited[it->data]);
        }
    }
}
graphNode* cloneGraph(graphNode *node){
    if(!node) return node;
    vector<graphNode*> visited(100006,NULL);
    graphNode* newRoot = new graphNode(node->data);
    visited[node->data]=newRoot;
    dfs(node,visited,newRoot);
  return newRoot;
}
