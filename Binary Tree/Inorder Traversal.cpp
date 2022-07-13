 void InOrderTraversal(TreeNode* root , vector<int> & ans){
     if(root == NULL){
         return;
     }
     InOrderTraversal(root->left,ans);
     ans.push_back(root->data);
     InOrderTraversal(root->right,ans);
 }
vector<int> getInOrderTraversal(TreeNode *root)
{
    vector<int> inorder;
    InOrderTraversal(root ,inorder);
    return inorder;
}
