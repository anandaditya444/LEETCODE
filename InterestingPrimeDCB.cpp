#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

bool isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    // This is checked so that we can skip  
    // middle five numbers in below loop 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if ((n%i == 0) || (n%(i+2) == 0)) 
           return false; 
  
    return true; 
} 

int32_t main()
{
	IOS;
	int n;
	cin>>n;
	if(n <= 3)
	{
		cout<<1<<endl;
		return 0;
	}
	if(n & 1)
	{
		if(isPrime(n-2))
		{
			cout<<2<<endl;
		}
		else
		{
			cout<<3<<endl;
		}
	}
	else
	{
		cout<<2<<endl;
	}


	return 0;
}