#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {
    int maxi=0;
    int sum=0;
    unordered_map<int,int> mp;
    int n=arr.size();
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0){
            maxi=i+1;
        }
        else{
           if(mp.find(sum)!=mp.end()){ 
               maxi=max(maxi,i-mp[sum]);
            }
            else{
            mp[sum]=i;
             }
        }
    }
return maxi;
}
// int LongestSubsetWithZeroSum(vector < int > arr) {
//     int maxi=INT_MIN;
//     int n=arr.size();
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=i;i<n;j++){
//             sum+=arr[i];
//             if(sum==0){
//                 maxi=max(maxi,j-i+1);
//             }
//         }
//     }
// return maxi;
// }
