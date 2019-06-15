//Q. 994

class Solution {
public:
    int cnt = 0,cur = 0;
   // int vis[105][105];
    void dfs(vector<vector<int>>& grid,int idx,int jdx,int r,int c)
    {
        if(idx < 0 || jdx < 0 || idx >= r || jdx >= c)
            return;
        if(cur == 1)
        {
            cur++;
            dfs(grid,idx+1,jdx,r,c);
                // dfs(grid,idx-1,jdx,r,c);
                // dfs(grid,idx,jdx+1,r,c);
                // dfs(grid,idx,jdx-1,r,c);
        }
        else
        {
            //vis[idx][jdx] = 1;
            if(grid[idx][jdx] == 1)
            {
                grid[idx][jdx] = 2;
                cnt++;
                dfs(grid,idx+1,jdx,r,c);
                dfs(grid,idx-1,jdx,r,c);
                dfs(grid,idx,jdx+1,r,c);
                dfs(grid,idx,jdx-1,r,c);
            }
        }

    }
    
    int orangesRotting(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        int cnt = 0;
       // memset(vis,0,sizeof(vis));
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                // if(vis[i][j])
                //     continue;
                //vis[idx][jdx] = 1;
                if(grid[i][j] == 2)
                {
                   dfs(grid,i,j,r,c);
                    cur++;
                    //cnt++;
                }
            }
        }
      //  cout<<idx<<" "<<jdx<<endl;
//         dfs(grid,idx,jdx,r,c);
        
//         for(int i=0;i<r;i++)
//         {
//             for(int j=0;j<c;j++)
//             {
//                 cout<<grid[i][j]<<" ";
//             }
//             cout<<endl;
//         }
        
//         for(int i=0;i<r;i++)
//         {
//             for(int j=0;j<c;j++)
//             {
//                 if(grid[i][j] == 1)
//                 {
//                     return -1;
//                 }
//             }
//         }
        return cnt;
    }
};