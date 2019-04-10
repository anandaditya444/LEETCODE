Given a set of distinct integers, nums, return all possible subsets (the power set).

Note: The solution set must not contain duplicate subsets.

class Solution {
public:
    vector<int>temp;
    void solve(vector<vector<int> >&res,int start,int n,int k,vector<int>&nums)
    {
        if(temp.size() == k)
        {
            res.push_back(temp);
            return;
        }
        
        for(int i=start;i<n;i++)
        {
            temp.push_back(nums[i]);
            solve(res,i+1,n,k,nums);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        
        vector<vector<int> >res;
        if(n==0)
            return res;
        for(int i=0;i<=n;i++)
            solve(res,0,n,i,nums);
        return res;
    }
};