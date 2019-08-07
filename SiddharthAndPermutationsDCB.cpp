#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define endl "\n"


int32_t main()
{
	IOS;
	int n,x;
	cin>>n;
	int vis[n+1];
	memset(vis,0,sizeof(vis));
	vector<int>v,ans(n+1,0),idx,reqd;
	int cnt = 0;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		if(n == 1)
		{
			cout<<x<<endl;
			return 0;
		}
		if(x == -1)
		{
			idx.pb(i);
			cnt++;
		}
		else
		{
			v.pb(x);
			vis[x] = 1;
		}
	}

	// for(auto x:idx)
	// 	cout<<x<<" ";
	// cout<<endl;
	// for(auto x:v)
	// 	cout<<x<<" ";
	// cout<<endl;
	int ind = 0,num = n;
	for(int i=n;i>=1;i--)
	{
		if(!vis[i])
		{
			ans[idx[ind]] = num;
			num--;
			ind++;
		}
	}
	// for(auto x:ans)
	// 	cout<<x<<" ";
	// cout<<endl;
	for(int i=0;i<n-cnt;i++)
	{
		reqd.pb(i+1);
	}
	// for(auto x:reqd)
	// 	cout<<x<<" ";
	// cout<<endl;
	for(int i=1;i<n-cnt;i++)
	{
		if(v[i-1] > v[i])
			swap(reqd[i-1],reqd[i]);
	}
	int j = 0;
	for(int i=1;i<=n;i++)
	{
		if(ans[i] == 0)
		{
			ans[i] = reqd[j];
			j++;
		}
	}
	for(int i=1;i<=n;i++)
		cout<<ans[i]<<" ";
	cout<<endl;


	return 0;
}