#include<bits/stdc++.h>
vector<int> getTopView(TreeNode<int> *root) {
    vector<int> ans;
    if(!root) return ans;
    map<int, int> hdtoNode;
    queue<pair<TreeNode<int> *,int>> q;
    q.push({root, 0});
    while(!q.empty()){
        auto temp = q.front().first;
          int hd = q.front().second;
           q.pop();
        if(hdtoNode.find(hd) == hdtoNode.end()){
            hdtoNode[hd] = temp ->val;
        }
        if(temp -> left)   q.push({temp -> left,hd - 1});
        if(temp -> right)  q.push({temp -> right,hd + 1});
    }
    for(auto &it:hdtoNode){
        ans.push_back(it.second);
    }
    return ans;
}
