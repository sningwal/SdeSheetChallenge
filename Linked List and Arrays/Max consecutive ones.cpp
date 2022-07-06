class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int m=0;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
             if(nums[i]==1){
                 cnt++;
                 m=max(cnt,m);
                     
             }
            else{
                cnt=0;
            } 
        }
        return m;
    }
};
