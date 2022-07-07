#include<bits/stdc++.h>
bool cmp(vector<int> job1,vector<int> job2){
    if(job1[1]>job2[1]) 
        return true;
    else 
      return false;
}
int jobScheduling(vector<vector<int>> &jobs)
{
     int n=jobs.size();
    //max profit sort in des order of profit
    sort(jobs.begin(),jobs.end(),cmp);
    int maxidead = jobs[0][0];
    for(int i=1; i<n; i++){
        maxidead = max(maxidead , jobs[i][0]);
    }
    int slot[maxidead+1];
    for(int i=0; i<=maxidead; i++){
       slot[i] = -1;
     }
    int jobProfit=0;
    
    for(int i=0; i<n; i++){
         for(int j=jobs[i][0]; j>0; j--){
             if(slot[j]==-1){
                 slot[j]=i;
                 jobProfit += jobs[i][1];
                 break;
             }
         }
    }
    return jobProfit;
}

