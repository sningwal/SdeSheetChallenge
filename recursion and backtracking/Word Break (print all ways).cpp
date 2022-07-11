#include<bits/stdc++.h>
//recursion backtracting
//DP
//
void solve(int idx,string s,set<string> &dictionary,vector<string> &ans,string candidate){
    if(idx==s.size()){
        ans.push_back(candidate);
        return;
    }
             //string temp="";
    for(int i=idx;i<s.size();i++){
                //temp+=s[i];
              string temp=s.substr(idx,i-idx+1);
         if(dictionary.find(temp)!=dictionary.end()){
             //candidate.push_back(temp); not push you have add 
          solve(i+1,s,dictionary,ans,candidate + temp +" ");
         }
    }
}
vector<string> wordBreak(string &s, vector<string> &dictionary)
{
   set<string> st;
   vector<string> ans;
   //vector<string> temp;
    for(auto a: dictionary) st.insert(a);
    solve(0,s,st,ans,"");
//     string s="";
//     for(auto res : ans){
//         for(auto k:res){
//             s+=k;
//         }
//     }
   return ans;
}
