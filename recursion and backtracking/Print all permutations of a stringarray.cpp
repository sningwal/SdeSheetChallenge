void Permutation(string &s,vector<string> &ans ,int idx){
      if(idx==s.size()){
          ans.push_back(s);
          return;
      }
    for(int i=idx;i<s.size();i++){
        swap(s[idx],s[i]);
        Permutation(s,ans,idx+1);
        swap(s[idx],s[i]);    
    }    
}
vector<string> findPermutations(string &s) {
    // Write your code here.
    vector<string> ans;
    Permutation(s,ans,0);
    return ans;
}
