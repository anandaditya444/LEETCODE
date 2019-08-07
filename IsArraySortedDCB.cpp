#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

int n;

bool solve(int *a,int idx)
{
	if(idx >= n)
		return true;
	if(a[idx] < a[idx-1])
		return false;
	return solve(a,idx+1);
}

int32_t main()
{
	IOS;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	if(solve(a,1))
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;

	return 0;
}