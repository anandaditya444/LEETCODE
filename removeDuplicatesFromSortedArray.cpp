26. Remove Duplicates from Sorted Array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i = 0;
        for(int x:nums)
        {
            if(i < 1 || x > nums[i-1])
                nums[i++] = x;
        }
        return i;
    }
        