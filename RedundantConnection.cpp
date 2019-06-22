//Q. 684

DSU IMPLEMENTATION

class Solution {
public:
int root[1005], sz[1005];

void init(int n)
{
	for(int i=1;i<=n;i++)
	{
		root[i]=i;
		sz[i]=1;
	}
}

int rt(int k)
{
	while(k!=root[k])
	{
		root[k]=root[root[k]];
		k=root[k];
	}
	return k;
}

void merge(int u, int v)
{
	int rt1=rt(u);
	int rt2=rt(v);

	if(rt1==rt2)
		return;

	if(sz[rt1]>sz[rt2])
		swap(rt1, rt2);

	sz[rt2]+=sz[rt1];
	sz[rt1]=0;
	root[rt1]=root[rt2];
}

    
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        init(n+1);
        int u,v;
        vector<int>ans(2);
        for(int i=0;i<n;i++)
        {
            u = edges[i][0];
            v = edges[i][1];
            
            if(rt(u) == rt(v))
            {
                ans[0] = u;
                ans[1] = v;
            }
            else
            {
                merge(u,v);
            }
        }
        return ans;
    }
};