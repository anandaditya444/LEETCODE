#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

int32_t main()
{
	IOS;
	int n;
	cin>>n;
	int a[n],r[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int mx = 0,idx = 0;
	for(int i=0;i<n;i++)
	{
		cin>>r[i];
		if(r[i] > mx)
		{
			mx = r[i];
			idx = i;
		}
	}
	int ele = a[idx];
	for(int i=ele;;i+=ele)
	{
		int ans = mx + i;
		int flag = 0;
		for(int i=0;i<n;i++)
		{
			if((ans % a[i]) != r[i])
			{
				flag = 1;
				break;
			}
		}
		if(!flag)
		{
			cout<<ans<<endl;
			break;
		}
	}

	return 0;
}