#include<bits/stdc++.h>
//naive approach 
// int getMedian(vector<vector<int>> &matrix)
// {
//      vector<int> ans;
//     for(int i=0;i<matrix.size();i++)
//     {
//         for(int j=0;j<matrix[0].size();j++)
//         {
//             ans.push_back(matrix[i][j]);
//         }
//     }
    
//     sort(ans.begin(), ans.end());
//     int m=ans.size()/2;
//     int x=ans[m];
//     return x;
// }
//->efficient Binary Search
int countSmallerOrEqualtoMid(vector<int> &row,int mid){
    int l=0, h=row.size()-1;
    while(l<=h){
        int m=l+(h-l)/2;
        if(row[m]<=mid){
            l=m+1;
        }else{
            h=m-1;
        }
    }
    return l;
}

int getMedian(vector<vector<int>> &matrix)
{
    int n=matrix.size();
    int m=matrix[0].size();
    int low=1;
    int high=1e9;
    while(low<=high){
        int mid=(high+low)/2;
        int cnt=0;   //<=mid
        for(int i=0;i<n;i++){
           cnt+=countSmallerOrEqualtoMid(matrix[i],mid);
        }
        if(cnt<=(n*m)/2) low=mid+1;
        else high=mid-1;
    }
    return low;
}
