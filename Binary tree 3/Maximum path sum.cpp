#include<bits/stdc++.h>
int findMaxPathSum(TreeNode<int>* root,int &maxi) {
  if (root == NULL) return 0;
  int leftMaxPath = max(0, findMaxPathSum(root -> left, maxi));
  int rightMaxPath = max(0, findMaxPathSum(root -> right, maxi));
   maxi = max(maxi, leftMaxPath + rightMaxPath + root->val);
  return max(leftMaxPath,rightMaxPath) + root->val;
}
long long int findMaxSumPath(TreeNode<int> *root)
{
   if(!root) return -1;
   if(!root->left || !root->right) return -1; 
  int maxi = INT_MIN;
  findMaxPathSum(root, maxi);
  return maxi;
}
