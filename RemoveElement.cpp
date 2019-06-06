// Q. 27

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int lastfound = 0,cur = 0;
        for(int cur = 0;cur<nums.size();cur++)
        {
            if(nums[cur] != val)
                swap(nums[lastfound++],nums[cur]);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == val)
            {
               return i;
            }
        }
        return nums.size();
    }
};