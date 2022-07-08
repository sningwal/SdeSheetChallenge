void subHelper(vector<int> &num, int idx,int sum,vector<int> &ans){
     
    if(idx>=num.size()){
        ans.push_back(sum);
        return;
    }
        subHelper(num,idx+1,sum+num[idx],ans);
        subHelper(num,idx+1,sum,ans);
}
vector<int> subsetSum(vector<int> &num)
{
    int n=num.size();
    int idx=0;
    vector<int> ans;
    int sum=0;
    subHelper(num,idx,sum,ans);
    sort(ans.begin(),ans.end());
    return ans;
}
