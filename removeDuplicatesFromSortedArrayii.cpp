80. Remove Duplicates from Sorted Array II

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     
        int i = 0;
        for(auto x:nums)
        {
            if(i < 2 || x > nums[i-2])
            {
                nums[i++] = x;
            }
        }
        return i;

//ANOTHER SOLUTION
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     
        int n = nums.size();
        if(n == 0)
            return 0;
        int cnt = 1,idx = 1;
        int chk = nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i] != nums[i-1])
            {
                cnt++;
            }
            if(chk == nums[i])
            {
                idx++;
                chk = nums[i];
            }
            else
            {
              int j = i;
            while(idx > 2)
            {
                nums[j-1] = INT_MAX;
                idx--;
                j--;
            }  
            if(idx == 2)
                 cnt++;
            idx = 1;
            chk = nums[i];
            }     
        }
        if(idx >= 2)
            cnt++;
        sort(nums.begin(),nums.end());
        return cnt;
    }
};

//THIRD SOLUTION
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int chk = nums[0];
        int cnt = 1;
       // int pntr = 1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i] > chk)
            {
                //cnt++;
                chk = nums[i];
                nums[cnt++] = chk;
            }
        }
        return cnt;
    }
};
