#include<bits/stdc++.h>
vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
    queue<pair<TreeNode<int>*, int>> q;
    vector<int> ans;
    map<int, vector<int>> mp;
    q.push({root,0});
    while(!q.empty()){
        TreeNode<int>* f = q.front().first;
        int hd = q.front().second;
         q.pop();
        mp[hd].push_back(f->data);
        if(f->left){
            q.push({f->left,hd-1});
        }
        if(f->right){
            q.push({f->right,hd + 1});
        }
    }
    for(auto &it : mp){
        for(auto i : it.second){
            ans.push_back(i);
        }
    }
    return ans;
}
