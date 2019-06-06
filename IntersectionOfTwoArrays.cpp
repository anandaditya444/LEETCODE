//Q. 349

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1,s2;
        vector<int>ans;
        for(auto &x:nums1)
            s1.insert(x);
        for(auto &x:nums2)
            s2.insert(x);
        
        int sz1 = s1.size();
        int sz2 = s2.size();
        
        if(sz1 > sz2)
        {
            for(auto &it:s2)
            {
                if(s1.find(it) != s1.end())
                {
                    ans.push_back(it);
                }
            }
        }
        else
        {
            for(auto &it:s1)
            {
                if(s2.find(it) != s2.end())
                {
                    ans.push_back(it);
                }
            }
        }
        return ans;
    }
};