#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

map<int,int>m;

int32_t main()
{
	IOS;
	int n,x;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		m[x]++;
	}
	int cur = 0,ans = 0;
	for(auto x:m)
	{
		if(x.ss > cur)
		{
			cur = x.ss;
			ans = x.ff;
		}
	}
	cout<<ans<<endl;

	return 0;
}