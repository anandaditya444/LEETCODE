class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>v;
        map<int,int>m;
        
        for(int i=0;i<n;i++)
        {
            int val = target-nums[i];
            if(m.find(val) != m.end())
            {
                v.push_back(m[val]);
                v.push_back(i);
                return v;
            }
            else
                m[nums[i]] = i;
        }
        return v;
    }
};