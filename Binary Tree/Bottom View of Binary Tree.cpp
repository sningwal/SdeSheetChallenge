vector<int> bottomView(BinaryTreeNode<int> * root){
    vector<int> ans;
    map<int, int> mp;
    if(root == NULL) return ans;
    queue<pair<BinaryTreeNode<int> *, int> > q;
    q.push({root, 0}); 
    
     while(!q.empty()){
         BinaryTreeNode<int> * temp = q.front().first;
             int hd = q.front().second;
             q.pop();
  //
               mp[hd] = temp -> data;
     
           if(temp->left)  q.push({temp -> left, hd - 1}); 
           if(temp->right) q.push({temp -> right, hd + 1});         
       }
    
    for(auto &it : mp){
        ans.push_back(it.second);
    }
  return ans;  
