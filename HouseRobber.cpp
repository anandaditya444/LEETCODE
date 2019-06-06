//Q. 198

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)
            return 0;
        if(n == 1)
            return nums[0];
        int mx = nums[0];
        int ans = max(nums[0],nums[1]);
        for(int i=2;i<n;i++)
        {
            nums[i] += mx;
            ans = max(ans,nums[i]);
            mx = max(mx,nums[i-1]);
        }
        return ans;
    }
};