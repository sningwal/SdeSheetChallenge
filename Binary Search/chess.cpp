#include<bits/stdc++.h>
bool isPossible(vector<int> positions,int mindist,int c,int n){
    int lastPlaced = positions[0];
      c--;
    for(int i = 1; i<n; i++){
        if(positions[i]-lastPlaced>=mindist){
            c--;
            if(!c){
                return true;
            }
            lastPlaced = positions[i];
        }
    }
    return false;
}
int chessTournament(vector<int> positions , int n ,  int c){
	sort(positions.begin(),positions.end());
    int maxDis = positions[n-1]-positions[0];
    int ans = INT_MIN;
//     for(int d = 1; d <= maxDis; d++){
//        if(isPossible(positions,d,c,n)){
//            ans=max(ans,d);
//        }
//     }
//search place
    int low = 1, high = positions[n-1] - positions[0];
    while (low <= high){
        int mid = (low + high) >> 1;
        if (isPossible(positions,mid,c,n)){
            ans=max(ans,mid);
            low = mid + 1;
        }
        else {
            high = mid -1;
        }
    }
   return ans;
}
