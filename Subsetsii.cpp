90. Subsets II

class Solution {
public:
    void dfs(vector<int>&nums,int start,vector<int>&out,vector<vector<int> >&res)
    {
        res.push_back(out);
        for(int i=start;i<nums.size();i++)
        {
            out.push_back(nums[i]);
            dfs(nums,i+1,out,res);
            out.pop_back();
            while(i+1 < nums.size() && nums[i+1] == nums[i])
                i++;
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int> >res;
        vector<int>out;
        
        int n = nums.size();
        if(n == 0)
        {
            res.push_back(out);
            return res;
        }
        sort(nums.begin(),nums.end());
       dfs(nums,0,out,res);
        
        return res;
    }
};