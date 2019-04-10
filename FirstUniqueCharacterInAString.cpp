//First Unique character in a string

class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>m;
        for(auto x:s)
            m[x]++;
        for(int i=0;i<s.length();i++)
        {
            if(m[s[i]] == 1)
                return i;
        }
        return -1;
    }
};
