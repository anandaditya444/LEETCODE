class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int sum=nums[0]+nums[1]+nums[2];
        int result = sum,minvalue = INT_MAX;
        for(int i=0;i<n;i++)
        {
            // if(i>0 && nums[i]==nums[i-1])
            //     continue;
            int l = i+1,r = n-1;
            while(l<r)
            {
                sum = nums[l]+nums[r]+nums[i];
                int diff = abs(sum-target);
                if(diff<minvalue)
                {
                    result=sum;
                    minvalue=diff;
                }
                if(sum > target)
                    r--;
                else if(sum < target)
                    l++;
                else
                {
                    return sum;
                }
            }
        }
        return result;
    }
};