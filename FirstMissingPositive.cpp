//Q. 41

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int>s;
        for(auto x:nums)
        {
            if(x > 0)
                s.insert(x);
        }
        int cur = 1;
        if(s.empty())
            return cur;
        for(auto x:s)
        {
            if(x != cur)
                return cur;
            cur++;
        }
        return cur;
    }
};