#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x,y;
	cin>>x>>y;
	while(y != 0)
	{
		int borrow = (~x) & y;

		x = x ^ y;

		y = borrow << 1;
	}
	cout<<x<<endl;

	return 0;
}

For mulitplication 

https://www.geeksforgeeks.org/russian-peasant-multiply-two-numbers-using-bitwise-operators/