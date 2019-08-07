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
	int n;
	cin>>n;
	list<int>l,cur;
	int num = n;
	while(num > 0)
	{
		l.pf(num%10); 
		num /= 10;
	}
	cur = l;
	sort(cur.begin(),cur.end(),greater<int>());
	if(cur == l)
	{
		string ans = "";
		for(auto x:l)
			ans += x;
		sort(ans.begin(),ans.end());
		cout<<ans<<endl;
	}
	else
	{
		int cnt = 0;
		while(next_permutation(l.begin(),l.end()) && cnt < 1)
			cnt++;
		for(auto x:l)
			cout<<x;
		cout<<endl;
	}



	return 0;
}