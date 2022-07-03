#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
  int ans=INT_MIN;
    int l=0,r=0;
    map<char,int> m;//or can use map char int //varible sliding window problem
    if(input.size()==0){
        return 0;
    }
    while(r<input.size()){
        m[input[r]]++;
        if(m.size()==r-l+1){
            ans=max(ans,r-l+1);
            r++;
        }
        else if(m.size()<r-l+1){
            while(m.size()<r-l+1){
                m[input[l]]--;
                if(m[input[l]]==0){
                    m.erase(input[l]);
                }
             l++;
            }
            r++;
        }
    }
    return ans;
}
