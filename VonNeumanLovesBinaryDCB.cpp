#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"


int32_t main()
{
	IOS;
	int t;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		int ans = 0,p = 0;
		for(int i = s.length()-1;i>=0;i--)
		{
			ans += ((s[i]-'0')*(1<<p));
			p++;
		}
		cout<<ans<<endl;
	}



	return 0;
}