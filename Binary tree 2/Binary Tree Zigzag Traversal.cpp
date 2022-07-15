vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
     vector<int> zigZagTraversal;
    if(root == NULL) return zigZagTraversal;
    queue<BinaryTreeNode<int> *> q;
      q.push(root);
    bool lefttoright = true;
      while(!q.empty()){
          int size = q.size();
             vector<int> lvl(size);
          for(int i=0; i<size; i++){
           BinaryTreeNode<int> * temp = q.front();
           q.pop();
              if(lefttoright) 
              {
                  lvl[i] = temp->data;
               }
              else{
                  lvl[size-1-i]=temp->data;
              }
          if(temp->left) q.push(temp->left);
          if(temp->right) q.push(temp->right);
          }
          lefttoright = !lefttoright;
          for(auto &it:lvl){
              zigZagTraversal.push_back(it);
          }
    }
    return zigZagTraversal;
}

