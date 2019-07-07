#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x,y;
	cin>>x>>y;
	while(y != 0)
	{
		int carry = x & y;

		x = x ^ y;

		y = carry << 1;
	}
	cout<<x<<endl;

	return 0;
}