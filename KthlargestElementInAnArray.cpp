//Q. 215

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
       
        //sort(nums.begin(),nums.end(),greater<int>()); // O(nlogn) approach

       // nth_element(nums.begin(),nums.begin()+k-1,nums.end(),greater<int>()); //O(n) approach
        
        partial_sort(nums.begin(),nums.begin()+k,nums.end(),greater<int>()); //O(n) approach
        
        return nums[k-1];
    }
};