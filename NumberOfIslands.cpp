//Q. 200

class Solution {
public:
    int dx[4] = {-1,+1,0,0};
    int dy[4] = {0,0,+1,-1};

    int vis[1005][1005];
    
    void bfs(int x,int y,int n,int m,vector<vector<char> >&grid)
    {
        queue<pair<int,int> >q;
        q.push({x,y});
        vis[x][y] = 1;
        char val = grid[x][y];
        while(!q.empty())
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            
            for(int dir=0;dir<4;dir++)
            {
                int nx = x+dx[dir];
                int ny = y+dy[dir];
                
                if(nx < 0 || nx > n-1 || ny < 0 || ny > m-1)
                    continue;
                if(grid[nx][ny] != val)
                    continue;
                if(!vis[nx][ny])
                {
                    vis[nx][ny] = 1;
                    q.push({nx,ny});
                }
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        if(n == 0)
            return 0;
        int m = grid[0].size();
    
        memset(vis,0,sizeof(vis));
        
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j] == '1' && !vis[i][j])
                {
                    bfs(i,j,n,m,grid);
                    cnt++;
                }
            }
        }
        
        return cnt;
    }
};