#include<bits/stdc++.h>
void findSubsets(int idx,vector<int> arr,vector<int> &ds,vector<vector<int>> &ans){
    ans.push_back(ds);
    for(int i=idx;i<arr.size();i++){
        if(i!=idx and arr[i]==arr[i-1]) continue;
           ds.push_back(arr[i]);
        findSubsets(i+1,arr,ds,ans);
           ds.pop_back();
    }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    vector<vector<int>> ans;
    vector<int> ds;
    sort(arr.begin(),arr.end());
    findSubsets(0,arr,ds,ans);
    return ans;
}
