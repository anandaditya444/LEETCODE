#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

const int N = 1e2+5;
int dur[N],rew[N],dead[N];

int32_t main()
{
	IOS;
	int t,n;
	cin>>t>>n;
	for(int i=1;i<=n;i++)
		cin>>rew[i];
	for(int i=1;i<=n;i++)
		cin>>dur[i];
	for(int i=1;i<=n;i++)
		cin>>dead[i];
	for(int i=1;i<=n;i++)
	{
		int du = dur[i],de = dead[i],re = rew[i];
		int time = 0,bounty = 0,steps = 0;
		while(time < t && steps <= n)
		{
			if(time < de)
			time += dur[i];

		}
	}



	return 0;
}