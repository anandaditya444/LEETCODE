class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int> >ans;
        for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            int l=i+1,r=n-1;
            while(l<r)
            {
                int s = nums[l]+nums[r]+nums[i];
                if(s>0)
                    r--;
                else if(s<0)
                    l++;
                else
                {
                    ans.push_back(vector<int>{nums[l],nums[r],nums[i]});
                    while(nums[l]==nums[l+1])
                        l++;
                    while(nums[r]==nums[r-1])
                        r--;
                    l++;r--;   
                }
                
            }
        }
        return ans;
        
    }
};