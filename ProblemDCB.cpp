#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

string str1,str2;

bool func()
{
	return str1 == str2;
}

int32_t main()
{
	IOS;
	cin>>str1>>str2;
	reverse(str1.begin(),str1.end());
	if(func())
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;

	return 0;
}