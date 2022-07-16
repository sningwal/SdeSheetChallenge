bool SymmetricHelper(BinaryTreeNode<int>* left, BinaryTreeNode<int>* right){
    if(left == NULL || right == NULL) return left == right;
    if(left->data != right->data) return false;
    return SymmetricHelper(left->left,right->right) && SymmetricHelper(left->right,right->left);
}
bool isSymmetric(BinaryTreeNode<int>* root)
{
    return root == NULL || SymmetricHelper(root->left, root->right);
}
