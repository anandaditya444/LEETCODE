#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

const int N = 1e4+5;
int a[N];
int cur = 1;

int dp(int idx)
{
	for(int i=1;i<=n;i++)
	{
		if(i == idx)
			continue;
		ans = min(a[i]+1,min(a[i]+2))

	}
}

int32_t main()
{
	IOS;
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		dp(1)
	}



	return 0;
}