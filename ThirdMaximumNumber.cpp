//Q.414

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)
            return nums[0];
        else if(n == 2)
            return max(nums[0],nums[1]);
        set<int>s;
        for(auto x:nums)
        {
            s.insert(x);
        }
        if(s.size() < 3)
            return *s.rbegin();
        
        int cnt = 1;
       for(auto x = s.rbegin();x != s.rend();x++)
       {
           if(cnt == 3)
               return *x;
           cnt++;
       }
        return 0;
    }
};