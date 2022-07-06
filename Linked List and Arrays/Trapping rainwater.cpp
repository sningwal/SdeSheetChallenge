#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
     long lmx=0,rmx=0;
   int i=0,j=n-1;
    long sum=0;
    while(i<j){
        lmx=max(lmx,arr[i]);
        rmx=max(rmx,arr[j]); 
        if(lmx<rmx){
            sum+=(lmx-arr[i]);
            i++;
        }
        else{
            sum+=(rmx-arr[j]);
            j--;
        }
    }
 return sum;
}
