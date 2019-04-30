//Q.14

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string ans = "";
        if(n == 0)
            return ans;
        if(n == 1)
            return strs[0];
        string chk = strs[0];
        for(int i=0;i<chk.length();i++)
        {
            for(int j=1;j<n;j++)
            {
                if(strs[j][i] != chk[i])
                {
                   return ans;
                }
            }
            ans += chk[i];
        }
        return ans;
    }
};