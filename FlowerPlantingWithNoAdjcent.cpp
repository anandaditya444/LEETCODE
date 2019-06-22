//Q. 1042

https://www.geeksforgeeks.org/graph-coloring-set-2-greedy-algorithm/
 
 A Graph coloring problem.

 //greedy approach

 class Solution {
public:
    vector<int> gardenNoAdj(int N, vector<vector<int>>& paths) {
        vector<int>ans(N,0);
        vector<int>g[N];
        for(auto x:paths)
        {
            g[x[0]-1].push_back(x[1]-1);
            g[x[1]-1].push_back(x[0]-1);
        }
        // for(int x=0;x<N;x++)
        // {
        //     for(auto c:g[x])
        //         cout<<c<<" ";
        //     cout<<endl;
        // }
        int col[5];
        for(int i=0;i<N;i++)
        {
            memset(col,0,sizeof(col));
            for(auto x:g[i])
                col[ans[x]] = 1;
            for(int c=1;c<=4;c++)
            {
                if(!col[c])
                {
                    ans[i] = c;
                    //break;   
                }
            }
        }
        return ans;
    }
};