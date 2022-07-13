#include<bits/stdc++.h>
int uniqueElement(vector<int> arr, int n)
{
//   //1.naive 
//     for(int i=0;i<n;i=i+2){
//         if(arr[i]!=arr[i+1]) return arr[i];
//     }
    //2.naive frequency count
//      unordered_map<vector<int> , int> mp;
//     for(auto k:arr){
//         mp[k]++;
//     }
//    for(auto k:arr){
//         if(mp.count(k)==1) return k;
//     }
    //3.xor 0 of same no int ans=0;
    //4.binary
    int low=0,high=arr.size() - 2;
    while(low<=high){
        int mid = (low+high) >> 1;
        if(arr[mid] == arr[mid^1]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
 return arr[low];
}

