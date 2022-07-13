//****************************/
void getLeftViewHelper(TreeNode<int> * root, vector<int> &ans, int level){
          if(root == NULL) return;
        if(level == ans.size() ){
            ans.push_back(root->data);
        }
    getLeftViewHelper(root->left, ans, level + 1);
    getLeftViewHelper(root->right, ans, level + 1);
}

vector<int> getLeftView(TreeNode<int> *root)
{
      vector<int> LeftView;
    if(root == NULL ) return LeftView;
    getLeftViewHelper(root, LeftView, 0);
    return LeftView;
}
