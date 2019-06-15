//Q. 785

class Solution {
public:
    bool vis[105],col[105];
    int ans = 1;
    
    void dfs(vector<vector<int>>& graph,int u,int c)
    {
        if(vis[u])
        {
            if(col[u] != c)
            {
                ans = 0;
            }
            return;
        }
        vis[u] = 1;
        col[u] = c;
        
        for(auto x:graph[u])
            dfs(graph,x,c^1);
    }
    
    bool isBipartite(vector<vector<int>>& graph) {

        int n = graph.size();
        memset(vis,0,sizeof(vis));
        memset(col,0,sizeof(col));
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
                dfs(graph,i,0);
        }
        if(ans)
            return true;
        return false;
    }
};