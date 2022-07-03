#include <bits/stdc++.h> 
// int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
//     int count=INT_MIN;
//     sort(arr.begin(),arr.end());
//     int prev=arr[0];
//     int curr=1;
//    for(int i=0;i<n;i++){
//       if(prev+1==arr[i]){
//           curr++;
//       }
//        else if(prev!=arr[i]){
//            curr=1;
//        }
//        prev=arr[i];
//        count=max(count,curr);
//    }
//     return count;
// }
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
   unordered_set<int> s;
    for(auto i:arr){
        s.insert(i);
    }
    int lstreak=0;
    for(int i=0;i<n;i++){
        if(s.find(arr[i]-1)==s.end()){
            {
             int curnum=arr[i];
             int curstreak=1;
             while(s.find(curnum+1)!=s.end()){
                 curnum+=1;
                 curstreak+=1;
             }
    lstreak=max(lstreak,curstreak);
            }
        }
    }
    return lstreak;
}
