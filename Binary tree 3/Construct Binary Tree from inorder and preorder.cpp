#include<bits/stdc++.h>
TreeNode<int> *contructTree(vector<int> &preorder,int preStart,int preEnd,vector<int> &inorder,int inStart,int inEnd,map<int,int> &mp){
    
    if(preStart > preEnd || inStart > inEnd) return NULL;
    
      TreeNode<int> *root = new TreeNode<int>(preorder[preStart]);
       int indexofrootinInorder = mp[root->data];
      int noOfLeftElements = indexofrootinInorder - inStart;
   
root->left = contructTree(preorder, preStart + 1, preStart + noOfLeftElements , inorder, inStart, indexofrootinInorder-1, mp);

root->right = contructTree(preorder, preStart + noOfLeftElements + 1 , preEnd, inorder, indexofrootinInorder + 1, inEnd, mp);
    
 return root;
}

TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{ 
     int n= preorder.size() - 1;
 int preStart = 0, preEnd =n;
 int inStart = 0, inEnd = n;
    map<int,int> mp;
    
    for(int i=inStart; i<=inEnd; i++){
        mp[inorder[i]] = i;
    }
return contructTree(preorder, preStart, preEnd, inorder, inStart, inEnd, mp);
}
