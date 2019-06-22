#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

const int N = 1e5+5;
int a[N],memo[N];
int n;

int dp(int idx)
{
	if(idx == n)
		return memo[idx] = 0;

	if(a[idx] == 0)
		return memo[idx] = 1e12;

	if(memo[idx] != -1)
		return memo[idx];

	int ans = 1e12;
	for(int i=idx+1;i<=idx+a[idx] && i<=n;i++)
		ans = min(ans,dp(i));
	return memo[idx] = 1 + ans;
}

int32_t main()
{
	IOS;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	memset(memo,-1,sizeof(memo));
	cout<<dp(1)<<endl;

	return 0;
}