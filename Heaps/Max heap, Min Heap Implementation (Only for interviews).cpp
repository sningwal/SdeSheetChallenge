// #include<bits/stdc++.h>
// class heap{
//     int arr[1000];
//     int size;
//     public:
//     heap(){
//         //arr[0] = -1;
//         size = 0;
//     }
//     void push(int val){
//          size++;
//         int idx = size;
//         arr[idx] = val;
//         while(idx > 1){
//             int parent = idx>>1;
//             if(arr[parent] > arr[idx]){
//                 swap(arr[parent], arr[idx]);
//                 idx = parent;
//             }
//             else{
//                 return;
//             }
//         }
//     }
//     int pop(){
//         if(size == 0) return -1;
//         int dElement = arr[1];
//         arr[1] = arr[size];
//         size--;
//         int i = 1;
//         while(i <=size){
//             int leftidx  = 2*i;
//             int rightidx = 2*i + 1;
//             int smaller = i;
//             if(leftidx <=size && arr[leftidx] < arr[smaller]){
//                 smaller = leftidx;
//             }
//             if(rightidx <= size && arr[rightidx] < arr[smaller]){
//                 smaller = rightidx;
//             }
//             if(i == smaller) break;
//             swap(arr[smaller], arr[i]);
     
//             i = smaller;
//         }
//         return dElement;
//     }
    
// };
// vector<int> minHeap(int n, vector<vector<int>>& q) {
//     vector<int> ans;
//     heap minH;
//     for(auto &it:q){
//         if(it[0]==0)minH.push(it[1]);
//         else ans.push_back(minH.pop());
//     }
//     return ans;
// }
vector<int> minHeap(int n, vector<vector<int>>& q) {
 priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> res;
     for(auto &d: q){
        if (d[0] == 0){
            pq.push(d[1]);
        }
        else if (!pq.empty()){
            res.push_back(pq.top()); 
            pq.pop(); 
        }
    }
    return res;
}
