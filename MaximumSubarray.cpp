//Q. 53

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int n = nums.size();
       int sum = nums[0],cur = 0;
        
        for(int i=0;i<n;i++)
        {
            cur += nums[i];
            sum = max(sum,cur);
            if(cur < 0)
                cur = 0;
        }
       return sum;
    }
};