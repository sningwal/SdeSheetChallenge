int findMinimumCoins(int amount) 
{
    int d[]={1,2,5,10,20,50,100,500,1000};
    int n=9;
    int ans=0;
   for(int i=n-1;i>=0;i--){
       //finding denominations
       while(amount>=d[i]){
           amount-=d[i];
            ans++;
         }
   }
    return ans;
}

