#include <bits/stdc++.h> 
string fourSum(vector<int> nums, int target, int n) {
    // Write your code here.
    vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
                    for(int j=i+1;j<n;j++){
                        int t=target-nums[i]-nums[j];
                       int left=j+1;
                       int right=n-1;
                        while(left<right){
                    if(t==nums[left]+nums[right]){
                              return "Yes";
                            }
                            else if(nums[left]+nums[right]>t){
                                right--;
                            }
                            else{
                                left++;
                            }
                        }
           }
    }
        return "No";
}

