class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     int n = nums.size();
        int mul = 1;
        int flag = 0;
        for(int i=0;i<n;i++)
        {
            if(nums[i] == 0)
            {
                flag++;
                continue;
            }
            mul *= nums[i];
        }
        vector<int>out(n,0);
        if(flag == 1)
        {
            for(int i=0;i<n;i++)
            {
                if(nums[i] == 0)
                {
                    out[i] = mul;
                    continue;   
                }
                nums[i] = 0;
                
            }
            return out;
        }
        else if(flag > 1)
        {
           // memset(out,0,sizeof(out));
            return out;
        }
        for(int i=0;i<n;i++)
        {
            out[i] = mul/nums[i];
        }
        return out;
    }
};