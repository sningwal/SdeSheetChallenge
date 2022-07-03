#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
   int ans=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
         int curXor=0;
        for(int j=i;j<n;j++){
            curXor^=arr[j];
            if(curXor==x){
                ans++;
            }
        }
    }
    return ans;
}
