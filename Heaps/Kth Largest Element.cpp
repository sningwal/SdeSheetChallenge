#include<bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
    priority_queue<int> pq;
    for(int i = 0; i<k; i++){
        pq.push(arr[i]);
    }
    
    for(int i = k; i<n; i++){
        if(arr[i] < pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    int min=pq.top();
    
    priority_queue<int,vector<int>,greater<int>> mn;
    for(int i = 0; i<k; i++){
        mn.push(arr[i]);
    }
    
    for(int i = k; i<n; i++){
        if(arr[i] > mn.top()){
            mn.pop();
            mn.push(arr[i]);
        }
    }
    int maxi=mn.top();
    
    return {min,maxi};
}
