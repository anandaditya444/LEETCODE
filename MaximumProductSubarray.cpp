class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int front_prod = 1;
        int back_prod = 1;
        int ans = -1e9;
        for(int i=0;i<n;i++)
        {
            front_prod *= nums[i];
            back_prod *= nums[n-i-1];
            ans = max(ans,max(front_prod,back_prod));
            
            front_prod = front_prod==0 ? 1 : front_prod;
            back_prod = back_prod==0 ? 1 : back_prod;
        }
        return ans;
    }
};