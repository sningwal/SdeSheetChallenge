vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
      vector<int> levelOrder;
    if(root == NULL) return levelOrder;
    queue<BinaryTreeNode<int> *> q;
      q.push(root);
      while(!q.empty()){
        BinaryTreeNode<int> * temp = q.front();
         q.pop();
         levelOrder.push_back(temp->val);
         if(temp->left) q.push(temp->left);
         if(temp->right) q.push(temp->right);
    }
    return levelOrder;
 }
