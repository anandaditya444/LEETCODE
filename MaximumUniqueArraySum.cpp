#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define endl "\n"

const int N = 2e5+5;
int a[N];
unordered_map<int,int>m;

int32_t main()
{
	IOS;	
	int n;
	cin>>n;
	int sum = 0,cur = 0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		m[a[i]]++;
		if(m[a[i]] == 1)
			sum += a[i];
	}
	for(auto x:m)
	{
		cur += x.ss-1;
	}
	for(int i=1;cur>0;i++)
	{
		if(m[i] == 0)
		{
			sum += i;
			cur--;
		}
	}
	cout<<sum<<endl;



	return 0;
}