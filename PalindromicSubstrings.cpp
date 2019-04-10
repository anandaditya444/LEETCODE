Count All Palindrome Sub-Strings in a String 

class Solution {
public:
    int countSubstrings(string s) {
        int n = s.length();
        int dp[n][n];
        bool p[n][n];
        memset(dp,0,sizeof(dp));
        memset(p,false,sizeof(p));
        
        //for palindrome of length 1
        for(int i=0;i<n;i++)
        {
            p[i][i] = true;
        }
        
        //for palindrome of length 2
        for(int i=0;i<n-1;i++)
        {
            if(s[i] == s[i+1])
            {
                p[i][i+1] = true;
                dp[i][i+1] = 1;
            }
        }
        
        //for palindrome of length more than 2
        for(int gap=2;gap<n;gap++)
        {
            for(int i=0;i<n-gap;i++)
            {
                int j = i+gap;
                if(s[i] == s[j] && p[i+1][j-1])
                {
                    p[i][j] = true;
                }
                
                if(p[i][j])
                {
                    dp[i][j] = dp[i][j-1]+dp[i+1][j]+1-dp[i+1][j-1];
                }
                else
                    dp[i][j] = dp[i][j-1]+dp[i+1][j]-dp[i+1][j-1];
            }
        }
        return dp[0][n-1];
    }
};