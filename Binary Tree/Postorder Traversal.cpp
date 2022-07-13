/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
void postOrderTraversal(TreeNode* root , vector<int> & postOrder){
     if( root == NULL) return;
      postOrderTraversal(root->left, postOrder);
      postOrderTraversal(root->right,postOrder);
      postOrder.push_back(root->data);
 }
vector<int> getPostOrderTraversal(TreeNode *root)
{
    vector<int> postOrder;
    postOrderTraversal(root , postOrder);
    return postOrder;
}
