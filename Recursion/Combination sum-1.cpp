#include<bits/stdc++.h>
void findSubsetHelper(int idx,int target,vector<int> &arr,vector<vector<int>> &ans,vector<int> &ds){
   if(idx==arr.size()){
      if(target==0){
       ans.push_back(ds);
        }
       return;
    }
   // else{
        ds.push_back(arr[idx]);
        findSubsetHelper(idx+1,target-arr[idx],arr,ans,ds);
        ds.pop_back();
        findSubsetHelper(idx+1,target,arr,ans,ds);
// }
//     if(idx>-arr.size()) return;
//         //pick up the element//
//     for(;idx<arr.size();idx++){
//         ds.push_back(arr[idx]);
//         findSubsetHelper(idx+1,target-arr[idx],arr,ans,ds);
//         ds.pop_back();
//       }
   //findSubsetHelper(idx+1,target,arr,ans,ds);   
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    vector<vector<int> > ans;
    vector<int> ds;
    findSubsetHelper(0,k,arr,ans,ds);
       //sort(ds.begin(),ds.end());
    return ans;
}
