//Q. 448

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int idx = abs(nums[i]) - 1;
            nums[idx] = nums[idx] > 0 ? -nums[idx] : nums[idx];
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i] > 0)
                v.push_back(i+1);
        }
        return v;
    }
};