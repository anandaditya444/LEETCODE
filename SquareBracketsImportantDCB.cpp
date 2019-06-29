//https://cp-algorithms.com/combinatorics/bracket_sequences.html


#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

const int N = 1005;
const int mod = 1e9+7;
int t,n,k;
int a[N];
int h[N];
int dp[N][N];

int solve()
{
	memset(dp,0,sizeof(dp));
	memset(h,0,sizeof(h));

	dp[0][0] = 1;
	for(int i=0;i<k;i++)
	{
		h[a[i]] = 1;
	}
	for(int i=1;i<=2*n;i++)
	{
		for(int j=0;j<=2*n;j++)
		{
			if(h[i])
			{
				if(j != 0)
				{
					dp[i][j] = dp[i-1][j-1];
				}
				else
				{
					dp[i][j] = 0;
				}
			}
			else
			{
				if(j != 0)
				{
					dp[i][j] = dp[i-1][j-1] + dp[i-1][j+1];
				}
				else
				{
					dp[i][j] = dp[i-1][j+1];
				}
			}
			//dp[i][j] %= mod;
		}
	}
	return dp[2*n][0];
}

int32_t main()
{
	IOS;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(int i=0;i<k;i++)
			cin>>a[i];
		
		cout<<solve()<<endl;
		// for(int i=0;i<n;i++)
		// 	cout<<h[i]<<" ";
		// cout<<endl;
	}



	return 0;
}