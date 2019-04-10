#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
ll bs(ll n)
{
   ll l=1,r=n;
   ll mid=0;
   while(l<=r)
   {
   	 mid=(l+r) >> 1;
   ll sum=(mid*(mid+1))/2;
      if(n>=sum)
      	l=mid+1;
      else if(sum > n)
      	r=mid-1;

   }

return l-1;
}
int main()
{
	ll n;
	cin>>n;
    cout<<bs(n)<<"\n";

return 0;
}