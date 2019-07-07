//http://hmrockstar.blogspot.com/2016/11/onezero-ones-and-zeros-solution.html

#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

string ans;
int t,n;

void bfs()
{
	queue<pair<string,int> >q;
	q.push({"1",1});
	while(!q.empty())
	{
		auto x = q.front();
		int a = x.ss;
		if(a % n == 0)
		{
			ans = x.ff;
			return;
		}
		a %= n;
		q.pop();
		q.push({x.ff+"0",a*10});
		q.push({x.ff+"1",a*10+1});
	}
}

int32_t main()
{
	IOS;
	cin>>t;
	while(t--)
	{
		cin>>n;
		bfs();
		cout<<ans<<endl;
	}

	return 0;
}