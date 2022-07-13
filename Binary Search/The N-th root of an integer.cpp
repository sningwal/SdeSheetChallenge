#include<bits/stdc++.h>
// double findNthRootOfM(int n, long long m) {
//   //power fun takes double and return double but in case of int not  
// //     double k=1/double(n);
// //     double j=m;
// 	double ans= pow(double(m),double(1/double(n)));
//     return ans;
// }
long double multiply( long double mid,int n){
    long double ans=1.0;
    for(int i=1;i<=n;i++){
        ans*=mid;
    }
    return ans;
}
long double findNthRootOfM(int n, long long m) {
   long double low=1.0, high=(long double)m,eps=1e-9;
    while((high-low)>eps){
   long double mid=(high-low)/2.0 + low;
        if(multiply(mid,n)>(long double)m){
             high=mid;
        }
        else{
         low=mid;
        }
    }
    //cout<<low<<" "<<high<<endl;
   return low;
}

