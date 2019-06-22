#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

const int mod = 1e9+7;

int32_t main()
{
	IOS;
	int t,a,b,c,l,r;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c>>l>>r;
		// a %= mod;
		// b %= mod;
		// c %= mod;
		// l %= mod;
		// r %= mod;
		int ans1 = (((r)*((r)+1)*(2*(r)+1))/6)%mod;
		int diff1 = ((((l-1))*(((l-1))+1)*(2*((l-1))+1))/6)%mod;
		ans1 -= diff1;
		//ans1 %= mod;
		ans1 = (ans1%mod*a%mod)%mod;
		int ans2 = (((r)*((r)+1))/2)%mod;
		int diff2 = ((((l-1))*(((l-1))+1))/2)%mod;
		ans2 -= diff2;
		//ans2 %= mod;
		ans2 = (ans2%mod*b%mod)%mod;
		int ans3 = (((r-(l-1))%mod)*(c%mod))%mod;
		cout<<(ans1+ans2+ans3)<<endl;
	}

	return 0;
}