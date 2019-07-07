class Solution {
public:
    
    int searchIn(vector<int>nums,int s,int e,int ele)
    {
        if(s>e)
            return -1;
        int mid = (s+e)/2;
        if(nums[mid] == ele)
            return mid;
        if(nums[s] <= nums[mid])
        {
           if(ele >= nums[s] && ele <= nums[mid])
                return searchIn(nums,s,mid,ele);
            else
               return searchIn(nums,mid+1,e,ele);
        }
        if(ele >= nums[mid] && ele <= nums[e])
           return searchIn(nums,mid+1,e,ele);
        else
            return searchIn(nums,s,mid,ele);

        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        
        int n = nums.size();
      int ans = searchIn(nums,0,n-1,target);
        
        return ans;
    }
};