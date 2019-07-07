#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define endl "\n"

const int N = 1e4+5;
int a[N];

int32_t main()
{
	IOS;
	int t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		cin>>m;
		sort(a+1,a+n+1);
		int ptr1 = 1,ptr2 = n,r1 = 0,r2 = 0;
		for(int i=1;i<=n && ptr1<ptr2;i++)
		{
			int sum = a[ptr1] + a[ptr2];
			if(sum == m)
			{
				r1 = a[ptr1];
				r2 = a[ptr2];
				ptr1++,ptr2--;
			}
			else if(sum < m)
			{
				ptr1++;
			}
			else
			{
				ptr2--;
			}
		}
		cout<<"Deepak should buy roses whose prices are "<<r1<<" and "<<r2<<"."endl;
	}


	return 0;
}