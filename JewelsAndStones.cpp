771. Jewels and Stoness

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int a = J.length();
        int b = S.length();
        map<char,int>m;
        for(int i=0;i<b;i++)
            m[S[i]]++;
        int ans = 0;
        for(int i=0;i<a;i++)
        {
            if(S.find(J[i]) != string::npos)
                ans += m[J[i]];
        }
        return ans;
    }
};