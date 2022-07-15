int helperMethod(BinaryTreeNode<int>* root){
    if(!root) return 0;
    int left  = helperMethod(root->left);
    int right = helperMethod(root->right);
    if(abs(left - right) > 1) return -1;
    if(left == -1 || right == -1) return -1;
    return max(left, right) + 1;
}

bool isBalancedBT(BinaryTreeNode<int>* root) {
    if(root == NULL) return true;
    if(helperMethod(root) == -1){
        return false;
    }
    return true;
}
