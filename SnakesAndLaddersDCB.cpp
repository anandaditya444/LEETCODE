#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

unordered_map<int,int>mp;
int n,m,turns,idx = 1;

void precompute(int n)
{
	int prime[n+5];
	fill(prime+2,prime+n+1,1);
	for(int i=2;i<=n;i++)
	{
		if(prime[i])
		{
			for(int j=2;i*j<=n;j++)
			{
				prime[i*j] = 0;
			}
		}
	}
	int fr = 2,ba = n;
	while(prime[fr] == 0 && fr <= n)
		fr++;
	while(prime[ba] == 0 && ba >= 2)
		ba--;
	//cout<<fr<<" "<<ba<<endl;
	int cnt = 1;
	while(fr < ba)
	{	
		if(cnt&1)
		{
			mp[fr] = ba;
		}
		else
		{
			mp[ba] = fr;
		}
		cnt++;
		fr++,ba--;
		while(prime[fr] == 0 && fr < n)
			fr++;
		while(prime[ba] == 0 && ba > 2)
			ba--;
	} 
	// for(auto x:m)
	// 	cout<<x.ff<<" "<<x.ss<<endl;
}

int dp(int* a,int cur,int turns)
{
	if(cur > n)
	{
		//cout<<cur<<endl;
		return true;
	}
	if(cur > m)
		return false;
	if(turns < 1)
		return false;

	if(mp[cur] != 0)
	{
		return dp(a,mp[cur],turns);
	}
	turns--;
	//idx++;
	return dp(a,cur+a[idx++],turns);
	//return a[cur]+m[cur] > a[cur] ? m[cur] : -m[cur];
}

int32_t main()
{
	IOS;
	cin>>n>>m;
	turns = m;
	precompute(n);
	int a[m+1];
	for(int i=1;i<=m;i++)
		cin>>a[i];
	
	bool ans = dp(a,idx,turns);
	if(ans)
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;

	return 0;
}