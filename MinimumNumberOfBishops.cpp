#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"

int32_t main()
{
	IOS;
	int n;
	while(cin>>n)
	{
		if(n == 1)
			cout<<1<<endl;
		else
			cout<<2*n-2<<endl;
	}

	return 0;
}