int getMaxWidth(TreeNode<int> *root)
{
if(root == NULL) return 0;
    queue<TreeNode<int>*> q;
    q.push(root);
    int maxWidth = 0;
    while(!q.empty()){
        int n = q.size();
        maxWidth = max(maxWidth, n);
        
        for(int i = 0; i < n; i++){
            TreeNode<int> *tmp = q.front();
            q.pop();
            if(tmp->left) q.push(tmp->left);
            if(tmp->right) q.push(tmp->right);
        }
    }
  return maxWidth;
}
