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
	int n;
	cin>>n;
	string a[n],b[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>b[i];
	for(int i=0;i<n;i++)
	{
		string s1 = a[i];
		string s2 = b[i];
		if(s1.length() != s2.length())
		{
			cout<<"-1"<<endl;
			continue;
		}
		multiset<char>s;
		for(auto x:s1)
			s.insert(x);
		for(auto x:s2)
		{
			if(s.find(x) != s.end())
				s.erase(s.find(x));
		}
		cout<<s.size()<<endl;
		
	}



	return 0;
}