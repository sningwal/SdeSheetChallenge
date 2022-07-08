 bool isPalindrome(string s, int start, int end) {
    while (start <= end) {
      if (s[start++] != s[end--])
         return false;
    }
    return true;
  }
void palindromepartition(string s,int idx,vector<string> &part,vector<vector<string>> &ans ){
   if(idx==s.size()){
       ans.push_back(part);
       return;
   }
   for(int i=idx;i<s.size();i++){
       
       if(isPalindrome(s,idx,i)){
           part.push_back(s.substr(idx,i-idx+1));
           palindromepartition(s,i+1,part,ans);
           part.pop_back();
       }
   } 
}
vector<vector<string>> partition(string &s) 
{
    vector<vector<string>> ans;
    vector<string> part;
    palindromepartition(s,0,part,ans);
        return ans;
}
