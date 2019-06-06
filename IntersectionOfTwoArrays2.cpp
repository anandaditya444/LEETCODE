//Q. 350

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m1,m2;
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
            m1.clear();
            m2.clear();
            for(auto x:nums1)
                m1[x]++;
            for(auto x:nums2)
                m2[x]++;
            for(auto &it:s2)
            {
                if(s1.find(it) != s1.end())
                {
                    for(int cnt=1;cnt<=min(m1[it],m2[it]);cnt++)
                        ans.push_back(it);
                }
            }
        }
        else
        {
            m1.clear();
            m2.clear();
            for(auto x:nums1)
                m1[x]++;
            for(auto x:nums2)
                m2[x]++;
            for(auto &it:s1)
            {
                if(s2.find(it) != s2.end())
                {
                    for(int cnt=1;cnt<=min(m2[it],m1[it]);cnt++)
                        ans.push_back(it);
                }
            }
        }
        return ans;
    }
};