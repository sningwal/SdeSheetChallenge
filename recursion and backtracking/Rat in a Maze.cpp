// void solve(int i,int j,vector<vector<int>> &ans,vector<vector<int>> &maze,vector<vector<int>> &vis,int n){
//     if(i==n-1 && j==n-1){
//          vector<int> temp;
//         for(auto k:vis){
//             for(auto l:k){
//                 temp.push_back(l);
//             }
//         }
//         ans.push_back(temp);
//         return;
//     }
//     //down
//     if(i+1<n && !vis[i+1][j]&& maze[i+1][j]==1){
//         vis[i][j]=1;
//         solve(i+1,j,ans,maze,vis,n);
//         vis[i][j]=0;
//     }
//     //left
//     if(j-1>=0 && !vis[i][j-1]&& maze[i][j-1]==1){
//         vis[i][j]=1;
//         solve(i,j-1,ans,maze,vis,n);
//         vis[i][j]=0;
//     }
//     //right
//     if(j+1<n && !vis[i][j+1]&& maze[i][j+1]==1){
//         vis[i][j]=1;
//         solve(i,j+1,ans,maze,vis,n);
//         vis[i][j]=0;
//     }
//     //up
//     if(i-1>=0 && !vis[i-1][j]&& maze[i-1][j]==1){
//         vis[i][j]=1;
//         solve(i-1,j,ans,maze,vis,n);
//         vis[i][j]=0;
//     }
// }
// vector<vector<int>> ratInAMaze(vector<vector<int> > &maze, int n){
//       vector<vector<int>> ans;
//       vector<vector<int>> vis(n,vector<int>(n,0));
//       solve(0,0,ans,maze,vis,n);
//     return ans;
//  }
void solve(vector<vector<int>> &res, vector<int> &visited, vector<vector<int>> &maze, int row, int col, int n){
   if(row == n-1 && col == n-1){
        visited[row*n+col] = 1;
        res.push_back(visited);
        return ;
    }
if(row >= n || row < 0 || col >= n || col < 0 || maze[row][col] == 0 || visited[row*n+col] == 1)
        return ;
    visited[row*n+col] = 1;
    //Down
    solve(res, visited ,maze, row+1, col , n);
    //Left
    solve(res, visited ,maze, row, col-1 , n);
    //Right
    solve(res, visited ,maze, row, col+1 , n);
    //Up
    solve(res, visited ,maze, row-1, col , n);
    visited[row*n+col] = 0;
}
vector<vector<int> > ratInAMaze(vector<vector<int> > &maze, int n){
    vector<vector<int>> res;
    vector<int> visited(n*n, 0);
    solve(res, visited, maze, 0,0,n);
      return res;
}
