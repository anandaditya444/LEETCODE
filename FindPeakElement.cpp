162. Find Peak Element

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0,end = nums.size()-1;
        
        while(start < end)
        {
            int mid = (start+end)/2;
            if(mid == 0)
            {
                if(nums[mid+1] < nums[mid])
                    return mid;
                else if(nums[mid+1] > nums[mid])
                    start = mid+1;
                continue;
            }
            if(mid == nums.size()-1)
            {
                if(nums[mid-1] < nums[mid])
                    return mid;
                else if(nums[mid-1] > nums[mid])
                    end = mid-1;
                continue;
            }
            if(nums[mid-1] < nums[mid] && nums[mid+1] < nums[mid])
                return mid;
            else if(nums[mid-1] > nums[mid])
                end = mid-1;
            else if(nums[mid+1] > nums[mid])
                start = mid+1;
        }
        return end;
    }
};