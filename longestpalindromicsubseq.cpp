#include <bits/stdc++.h>
using namespace std;

void lengthOfPalindromicSubseq(string s)
{
	int n = s.length();
	bool table[n][n];
	memset(table,false,sizeof(table));

	//length of 1 length strings
	for(int i=0;i<n;i++)
		table[i][i] = true;

	int max_len = 1;
	int start = 0;
	//for 2 length substrings
	for(int i=0;i<n-1;i++)
		if(s[i]==s[i+1])
		{
			table[i][i+1] = true;
			max_len = 2;
			start = i;
		}

	//for 3 or more than 3 length substrings
	for(int k=3;k<=n;k++)
	{
		for(int i=0;i<n-k+1;i++)
		{
			int j = i+k-1;
			if(table[i+1][j-1] && s[i]==s[j])
			{
				table[i][j] = true;
				if(k > max_len)
				{
					max_len = k;
					start = i;
				}
			}
		}
	}
	for(int i = start;i<=start+max_len-1;i++)
		cout<<s[i];
	cout<<endl;
}

int main()
{
	string s;
	cin>>s;
	lengthOfPalindromicSubseq(s);

	return 0;
}