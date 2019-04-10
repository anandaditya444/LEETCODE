class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        map<int,int>m;
        for(auto x:nums)
            m[x]++;
            vector<int>v;
        v.push_back(-1);
        v.push_back(-1);
        if(binary_search(nums.begin(),nums.end(),target) && m[target]>=2)
        {
            int lidx = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
            int uidx = upper_bound(nums.begin(),nums.end(),target) - nums.begin();
            v[0] = lidx;
            v[1] = uidx-1;
            return v;
        }
        if(binary_search(nums.begin(),nums.end(),target) && m[target]<2)
        {
            int lidx = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
            int uidx = upper_bound(nums.begin(),nums.end(),target) - nums.begin();
            v[0] = lidx;
            v[1] = uidx-1;
            return v;
        }
        return v;
    }
};