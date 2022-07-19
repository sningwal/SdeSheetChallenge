void solve(vector<vector<int>> &image, int i, int j, int m, int n, int oldColor, int newColor){
      if(i<0 || j<0 ||i>m-1 ||j>n-1 || image[i][j]!=oldColor) return;
    image[i][j]= newColor;
     solve(image, i+1, j, m, n, oldColor, newColor);
     solve(image, i-1, j, m, n, oldColor, newColor);
    
     solve(image, i, j-1, m, n, oldColor, newColor);
     solve(image, i, j+1, m, n, oldColor, newColor);
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
{
    int m = image.size();
    int n = image[0].size();
    int oldColor = image[x][y];
    if(oldColor == newColor) return image;
    solve(image, x, y, m, n, oldColor, newColor);
return image;
}
