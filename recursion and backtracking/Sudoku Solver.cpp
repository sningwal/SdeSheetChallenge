bool isValid(int matrix[9][9],int row,int col,int k){
    for(int i=0;i<9;i++){
       if(matrix[i][col]==k){
           return false;
       }
        if(matrix[row][i]==k){
            return false;
        }
        if(matrix[3*(row/3)+i/3][3*(col/3)+i%3]==k){
            return false;
        }
    }
    return true;
}
bool solve(int matrix[9][9]){
    for(int i=0;i<9;i++){
       for(int j=0;j<9;j++){
             if(matrix[i][j]==0){
                  for(int k=1;k<=9;k++){
                      if(isValid(matrix,i,j,k)){
                        matrix[i][j]=k;
                          if(solve(matrix)==true){
                             return true;
                          }
                          else{
                            matrix[i][j]=0;   
                          }
                      } 
                  }
                  return false;
              } 
        }
    }
   return true; 
}

bool isItSudoku(int matrix[9][9]) {
   solve(matrix);
}

