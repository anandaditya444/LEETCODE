#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

int32_t main()
{
	IOS;
	string s,word;
	getline(cin,s);
	stringstream iss(s);
	int ans = 0;
	while(iss >> word)
	{
		if(isdigit(word[0]))
		{
			ans += stoi(word);
		}
	}
	cout<<ans<<endl;


	return 0;
}