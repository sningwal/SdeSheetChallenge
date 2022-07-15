class Pair{
    public:
    int height;
    int diameter;
};
Pair Diameter(TreeNode<int> *root){
    Pair p;
    if(!root) {
        p.height = 0;
        p.diameter = 0;
        return p;
    }
    Pair left  = Diameter(root->left);
    Pair right = Diameter(root->right);
  
    p.height   = 1 + max( left.height, right.height);
    p.diameter = max(max(left.height + right.height, left.diameter), right.diameter);
    return p;
}

int diameterOfBinaryTree(TreeNode<int> *root)
{
    Pair p;
    p = Diameter(root);
    return p.diameter;
}

