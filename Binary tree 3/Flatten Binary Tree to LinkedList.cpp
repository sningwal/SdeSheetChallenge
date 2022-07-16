void flatten(TreeNode<int> *root,TreeNode<int>* &prev) {
      if (root == NULL) return;
   
      flatten(root -> right, prev);
      flatten(root -> left, prev);
   
      root -> right = prev;
      root -> left = NULL;
      prev = root;
    }

TreeNode<int> *flattenBinaryTree(TreeNode<int> *root)
{    
    TreeNode<int> * prev = NULL;
    flatten(root, prev);
//     TreeNode<int>* cur  =root;
//     TreeNode<int>* pre =NULL;
//         while (cur)
//         {  
//             if(cur->left)
//             {
//                 TreeNode<int>* pre = cur->left;
//                 while(pre->right)
//                 {
//                     pre = pre->right;
//                 }
                
//                 pre->right = cur->right;
//                 cur->right = cur->left;
//                 cur->left = NULL;
//             }
//             cur = cur->right;
//         }
    return root;
}
