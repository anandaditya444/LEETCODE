#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back


int32_t main()
{
	IOS;
	int n;
	cin>>n;
	while(n)
	{
		int ans = n*(n+1)*(2*n+1)/6;
		cout<<ans<<endl;
		cin>>n;
	}

	return 0;
}