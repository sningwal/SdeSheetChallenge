#include<bits/stdc++.h>
bool comp(pair<int,int> i1,pair<int,int> i2){
     double r1 = (double)i1.second/(double)i1.first;
     double r2 = (double)i2.second/(double)i2.first;
    return r1>r2;
}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    //int n=items.size();
    sort(items.begin(), items.end() ,comp);
      int curWeight =0;
    double maxvalue =0;
    for(int i=0;i<n;i++){
      if(curWeight + items[i].first<=w){
          curWeight +=items[i].first;
          maxvalue+=items[i].second;
      }
        else{
            int remain = w-curWeight;
            maxvalue += items[i].second/(double)items[i].first*(double)remain;
            break;
        }
    }   
 return maxvalue;
}
