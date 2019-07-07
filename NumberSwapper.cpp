#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define endl "\n"

int32_t main()
{
	IOS;
	int a,b;
	cin>>a>>b;
	cout<<"Value of a is - "<<a<<endl;
	cout<<"Value of b is - "<<b<<endl;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	cout<<"Value of a is - "<<a<<endl;
	cout<<"Value of b is - "<<b<<endl;

	return 0;
}