#include<bits/stdc++.h>
void connectNodes(BinaryTreeNode< int > *root) {
  
   queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i=0; i<n; i++){
           auto curNode = q.front();
            q.pop();
            if(i==n-1)curNode->next = NULL;
            else curNode->next = q.front();
            if(curNode->left) q.push(curNode->left);
            if(curNode->right) q.push(curNode->right);     
        }
    }
}
