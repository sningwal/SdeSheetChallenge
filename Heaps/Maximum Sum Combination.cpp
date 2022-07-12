#include<bits/stdc++.h>
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k){
   vector<int> candidate;
    for(int i = 0; i<n; i++){
         int f = a[i];
        for(int j = 0; j<n; j++){
              int candidateSum=a[i]+b[j];
              candidate.push_back(candidateSum);
        }
    }
   sort(candidate.begin() ,candidate.end(),greater<int>());
    vector<int> ans;
    for(int i = 0; i<k; i++){
        ans.push_back(candidate[i]);
    }
    return ans;
}
