#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

const int N = 11;
const int M = 11;
int mat[N][M];
int a[N];
int t,n,m;
int maxsum = 0,cursum = 0;

void kadane()
{
	cursum = 0;
	for(int i=1;i<=n;i++)
	{
		cursum += a[i];
		cursum = max(0ll,cursum);
		maxsum = max(cursum,maxsum);
	}
}

int32_t main()
{
	IOS;
	cin>>t;
	while(t--)
	{
		maxsum = 0;
		cin>>n>>m;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin>>mat[i][j];
			}
		}
		for(int i=1;i<=m;i++)
		{
			memset(a,0,sizeof(a));
			for(int j=i;j<=m;j++)
			{
				for(int k=1;k<=n;k++)
				{
					a[k] += mat[k][j];
				}
				kadane();
			}
		}
		cout<<maxsum<<endl;
	}


	return 0;
}