void inorder(BinaryTreeNode<int>* root,vector<int>&res)
{
    if(root==NULL)
        return;
    inorder(root->left,res);
    res.push_back(root->data);
    inorder(root->right,res);
}
BinaryTreeNode<int>* BTtoDLL(BinaryTreeNode<int>* root) {
    vector<int>res;
    inorder(root,res);
    BinaryTreeNode<int>* newnode = new BinaryTreeNode<int>(-1);
    BinaryTreeNode<int>* temp = newnode;
    for(int i=0;i<res.size();i++)
    {
     newnode->right=new BinaryTreeNode<int>(res[i]);
        BinaryTreeNode<int>* x = newnode->right;
         x->left=newnode;
         newnode=newnode->right;
    }
    return temp->right;
}
