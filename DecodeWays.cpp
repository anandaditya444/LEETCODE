91. Decode Ways

//DP APPROACH

class Solution {
public:
    int numDecodings(string s) {
        int n = s.length();
        if(n > 0 && s[0] > '0')
        {
            int count[n+1];
            count[0] = count[1] = 1;

            for(int i=2;i<=n;i++)
            {
                count[i] = 0;
                if(s[i-1] > '0')
                    count[i] += count[i-1];
                if(s[i-2] == '1' || (s[i-2] == '2' && s[i-1] < '7'))
                    count[i] += count[i-2];
            }
            return count[n];
        }
        else
            return 0;
    }
};