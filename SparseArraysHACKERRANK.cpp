#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define endl "\n"

unordered_map<string,int>m;

int32_t main()
{
	IOS;
	int n,q;
	string s;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		m[s]++;
	}
	cin>>q;
	for(int i=0;i<q;i++)
	{
		cin>>s;
		cout<<m[s]<<endl;
	}


	return 0;
}