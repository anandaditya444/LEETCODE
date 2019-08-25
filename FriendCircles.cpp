//Q. 547

 // int dx[] = {+1,-1,0,0};
 //    int dy[] = {0,0,-1,+1};
class Solution {
public:
    bool vis[201][201];
//     void bfs(int i,int j,int r,int c,vector<vector<int>>& M)
//     {
//         vis[i][j] = 1;
//         queue<pair<int,int> >q;
//         int val = M[i][j];
//         q.push({i,j});
//         while(!q.empty())
//         {
//             auto f = q.front();
//             q.pop();
//             int x = f.first;
//             int y = f.second;
//             for(int dir=0;dir<4;dir++)
//             {
//                 int nx = x + dx[dir];
//                 int ny = y + dy[dir];
//                 if(nx < 0 || nx > r-1 || ny < 0 || ny > c-1)
//                     continue;
//                 if(M[nx][ny] != val)
//                     continue;
//                 if(!vis[nx][ny])
//                 {
//                     vis[nx][ny] = 1;
//                     q.push({nx,ny});
//                 }
//             }
//         }
//     }
    
    int findCircleNum(vector<vector<int>>& M) {
        int r = M.size();
        int c = M[0].size();
        int cnt = 0;
        memset(vis,0,sizeof(vis));
       queue<pair<int,int> >q;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
               
                    if(M[i][j] == 1 && !vis[i][j])
                    {
                        q.push({i,j});
                         while(!q.empty())
                        {
                            int idx = q.front().first;
                            int jdx = q.front().second;
                            q.pop();
                            for(int k=0;k<r;k++)
                            {
                                if(M[k][jdx] == 1 && !vis[k][jdx])
                                {
                                    q.push({k,jdx});
                                    M[k][jdx] = 0;
                                    vis[k][jdx] = 1;
                                }
                            }
                            for(int k=0;k<c;k++)
                            {
                                if(M[idx][k] == 1 && !vis[idx][k])
                                {
                               	    q.push({idx,k});
                                    M[idx][k] = 0;
                                    vis[idx][k] = 1;
                                }
                            }
                        }
                    cnt++;
                }
            }
        }
        return cnt;
    }
};	