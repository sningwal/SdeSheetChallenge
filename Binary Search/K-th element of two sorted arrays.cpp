void merge(vector<int> &row1, vector<int> &row2,int m,int n,vector<int> &temp){
    int i=0;
    int j=0;
    while(i<m && j< n) {
            if(row1[i]<row2[j]){
                temp.push_back(row1[i++]);
            }
        else{
                temp.push_back(row2[j++]);
        }
    }
  while(i<m){
temp.push_back(row1[i++]);
  }
  while(j<n){
 temp.push_back(row2[j++]);  
  }
}
int ninjaAndLadoos(vector<int> &row1, vector<int> &row2, int m, int n, int k) {
    // Write your code here.
    vector<int> temp;
    merge(row1,row2,m,n,temp);
    return temp[k-1];
}
