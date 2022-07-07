int calculateMinPatforms(int at[], int dt[], int n) {
   sort(at,at+n);   
   sort(dt,dt+n);
    int cur_occupied_platform=1;
    int minPlatform=1;
    int i=1;
    int j=0;
    while(i<n && j<n){
        if(at[i]<=dt[j]){
            cur_occupied_platform++;
            i++;
         }
        else if(at[i]>dt[j]){
            cur_occupied_platform--;
            j++;
        }
        if(cur_occupied_platform > minPlatform){
            minPlatform=cur_occupied_platform;
        }
    }
    return minPlatform;
}
