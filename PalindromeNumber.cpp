//Q. 9

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        vector<int>v;
        while(x > 0)
        {
            v.push_back(x%10);
            x /= 10;
        }
        int fr = 0,re = v.size()-1;
        while(fr <= re)
        {
            if(v[fr] != v[re])
                return false;
            fr++,re--;
        }
        return true;
    }
};