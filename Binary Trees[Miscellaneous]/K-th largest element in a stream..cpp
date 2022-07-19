#include<bits/stdc++.h>
//using heap
class Kthlargest {
public:
    priority_queue<int, vector<int>, greater<int>> minheap;
    Kthlargest(int k, vector<int> &arr) {
        for(int i=0; i<arr.size(); i++){
            minheap.push(arr[i]);
        }
    }
    void add(int num) {
        if(num <= minheap.top()) return;
        minheap.push(num);
        minheap.pop();
    }

    int getKthLargest() {
        return minheap.top();
    }
};
