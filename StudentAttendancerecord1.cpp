//Q.551

class Solution {
public:
    bool checkRecord(string s) {
        int cnt_A = 0,flag = 0;
        for(auto x:s)
            if(x == 'A')
                cnt_A++;
        for(int i=2;i<s.length();i++)
        {
            if(s[i] == 'L' && s[i-1] == 'L' && s[i-2] == 'L')
            {
                flag = 1;
                break;
            }
        }
        if(cnt_A > 1 || flag)
            return false;
        return true;
    }
};