#include<bits/stdc++.h>
struct Activity{
    int s;
    int e;
    int pos;
};
bool comp(struct Activity a1 , struct Activity a2){
     if(a1.e<a2.e) return true;
    else if (a1.e>a2.e) return false;
    else if(a1.pos<a2.pos) return true;
    return false;
}
int maximumActivities(vector<int> &start, vector<int> &finish) {
    int n =start.size();
    struct Activity a[n];
    for(int i=0;i<n;i++){
        a[i].s=start[i];
        a[i].e=finish[i];
        a[i].pos=i+1;
    }
    sort(a,a+n,comp);
      int ans=0;
    int limit = a[0].e;
     ans =ans + 1 ;
    for(int i=1;i<n;i++){
        if(a[i].s>=limit){
            limit=a[i].e;
            ans=ans+1;
        }
    }
    return ans;
}
