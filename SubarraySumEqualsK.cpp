//Q. 560

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int cur = 0,cnt = 0;
        //store all the values upto i int the map and check for every current sum - target
        //if we find that value that means the target must be present during calculating the             //sum.
        map<int,int>m;
        m[0]++;
        for(int i=0;i<n;i++)
        {
           cur += nums[i];
            cnt += m[cur-k]; 
            m[cur]++;
        }
        return cnt;
    }
};