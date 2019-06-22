#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front

int32_t main()
{
	int n,k;
	cin>>n>>k;
	int a[k+1];
	memset(a,0,sizeof(a));
	int i = 0,candy = 1,total = n;
	while(total > 0)
	{
		//cout<<total<<endl<<candy<<endl<<i<<endl<<endl;
		a[i%k] += min(candy,total);
		total -= candy;
		candy++,i++;
	}
	for(int i=0;i<k;i++)
		cout<<a[i]<<" ";
	cout<<endl;


	return 0;
}