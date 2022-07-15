bool identicalTrees(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2) {
      if(root1 == NULL || root2 == NULL ) {
          return root1 == root2;
      }
   bool rootcheck  = root1->data == root2->data;
   bool leftcheck  = identicalTrees(root1->left,root2->left);
   bool rightcheck = identicalTrees(root1->right, root2->right);
  return rootcheck && leftcheck && rightcheck;
}
