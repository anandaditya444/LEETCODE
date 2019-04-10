class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        if(nums.size() == 0)
            return ans;
        map<int,int>m;
        for(auto x:nums)
            m[x]++;
        int no = nums.size()/3;
        for(auto x:m)
        {
            if(x.second > no)
                ans.push_back(x.first);
        }
        return ans;
    }
};