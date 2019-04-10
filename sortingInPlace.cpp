DUTCH NATIONAL FLAG PROBLEM

class Solution {
public:
    void sortColors(vector<int>& nums) {
       
        int r = -1,w = -1,b = -1;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == 0)
            {
                nums[++b] = 2;
                nums[++w] = 1;
                nums[++r] = 0;
                
            }
            else if(nums[i] == 1)
            {
                nums[++b] = 2;
                nums[++w] = 1;
            }
            else
                nums[++b] = 2;
        }
    }
};