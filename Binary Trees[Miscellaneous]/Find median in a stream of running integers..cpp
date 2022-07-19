#include<bits/stdc++.h>
vector<int> findMedian(vector<int> &arr, int n){
   // Write your code here 
    //naive TLE n2logn
//     vector<int> ans;
//     int count = 0;
//     for(int i = 0; i<n; i++){
//         count++;
//       sort(arr.begin(),arr.begin() + count);
//         if(count%2!=0){
//             int j = count/2;
//             ans.push_back(arr[j]);
//         }
//         else{
//             int j = count/2;
//             int k =  j-1;
//             int median = floor((arr[j]+arr[k])/2);
//             ans.push_back(median);
//         }
//     }
//     return ans;
// optimal using heap
    vector<int> ans;
    priority_queue<int ,vector<int>> maxheap;
    priority_queue<int ,vector<int>,greater<int>> minheap;
     for(int i=0; i<n; i++){
         if(i%2==0){
             minheap.push(arr[i]);
             maxheap.push(minheap.top());
             minheap.pop();
             ans.push_back(maxheap.top());
         }
         else{
             maxheap.push(arr[i]);
             minheap.push(maxheap.top());
             maxheap.pop();
             int median = (maxheap.top()+minheap.top()) / 2;
             ans.push_back(median);
         }
     }
    return ans; 
}
