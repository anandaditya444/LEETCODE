581. Shortest Unsorted Continuous Subarray

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
     int n = nums.size();
        int a[n];
        for(int i=0;i<n;i++)
            a[i] = nums[i];
        sort(a,a+n);
        int start = n+1;
        int end = -1;
        for(int i=0;i<n;i++)
        {
            if(a[i] != nums[i])
            {
                start = min(i,start);
                end = max(i,end);
            }
        }
        return (end-start >= 0 ? end-start+1 : 0);
    }
};