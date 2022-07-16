//Maintain a stack to see what is the previous directional movement of node of each node //present in the path.
//parent node store in stack
#include<bits/stdc++.h>
bool solve(TreeNode<int> *root, TreeNode<int> *leaf,stack<TreeNode<int>*> &st){
    st.push(root);
//     cout<<st.size()<<" ";
    if(!root->left && !root->right){
        if(root->data==leaf->data)
            return true;
        else{
            st.pop();
            return false;
        }
    }
    if(root->left){
    if(solve(root->left,leaf,st)) return true;
    }
    if(root->right){
    if(solve(root->right,leaf,st)) return true;
    }
    
    st.pop();
   return false;
}
TreeNode<int> * invertBinaryTree(TreeNode<int> *root, TreeNode<int> *leaf)
{
    if(!root) return NULL;
    
    stack<TreeNode<int> *> st;
    bool f = solve(root,leaf,st);
    TreeNode<int> *newroot = st.top();
    st.pop();
    TreeNode<int> *p = newroot;
    while(!st.empty()){
        auto cur = st.top();
        st.pop();
        if(cur -> left == p){
            cur -> left = NULL;
            p -> left = cur;
        }
        else{
            cur -> right = cur->left;
            cur->left = NULL;
            p->left = cur;
        }
        p=cur;
    }
    return newroot;
}
