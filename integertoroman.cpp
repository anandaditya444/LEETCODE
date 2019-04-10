#include <bits/stdc++.h>
using namespace std;

 string intToRoman(int num) {
        map<int,string>m;
        m[1] = "I";
        m[5] = "V";
        m[10] = "X";
        m[50] = "L";
        m[100] = "C";
        m[500] = "D";
        m[1000] = "M";
        m[4] = "IV";
        m[9] = "IX";
        m[40] = "XL";
        m[90] = "XC";
        m[400] = "CD";
        m[900] = "CM";

        string ns;
        while(num)
        {
        	for(auto it=m.rbegin();it!=m.rend();it++)
        	{
        		if(num >= it->first)
        		{
        			ns+=it->second;
        			num-=it->first;
        			break;
        		}
        	}
        }
        return ns;
    }

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<intToRoman(n)<<endl;
	}
	return 0;
}