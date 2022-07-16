#include<bits/stdc++.h>
TreeNode<int> *contructTree(vector<int> &postOrder,int pStart,int pEnd,vector<int> &inOrder,int inStart,int inEnd,map<int,int> &mp){
    
    if(pStart>pEnd ||inStart>inEnd) return NULL;
    TreeNode<int> *root = new TreeNode<int>(postOrder[pEnd]);
       int indexofrootinInorder = mp[root->data];
      int noOfLeftElements = indexofrootinInorder - inStart;
  root->left = contructTree(postOrder, pStart, pStart + noOfLeftElements-1 , inOrder, inStart, indexofrootinInorder-1, mp);
root->right = contructTree(postOrder, pStart + noOfLeftElements, pEnd-1, inOrder, indexofrootinInorder + 1, inEnd, mp);
}
TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postOrder, vector<int>& inOrder) 
{
 int n= postOrder.size() - 1;
 int pStart = 0, pEnd =n;
 int inStart = 0, inEnd = n;
    map<int,int> mp;
    
    for(int i=inStart; i<=inEnd; i++){
        mp[inOrder[i]] = i;
    }
return contructTree(postOrder, pStart, pEnd, inOrder, inStart, inEnd, mp);
}

