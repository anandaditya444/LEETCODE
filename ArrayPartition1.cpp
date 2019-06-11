//Q. 561

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        for(int i=1;i<nums.size();i+=2)
            ans += min(nums[i],nums[i-1]);
        
        return ans;
    }
};