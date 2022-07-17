bool searchInBST(BinaryTreeNode<int> *root, int x) {
  
    if(root == NULL) return false;
    
    if(root->data == x) 
    { 
        return true;
    }
 
    if(x < root->data){
       return searchInBST(root->left, x);
    }
    else{
        return searchInBST(root->right, x);
    }
    
 return false;
}
