class Solution {
public:
   
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<vector<int> >v;
        v.push_back(nums);
        while(next_permutation(nums.begin(),nums.end()))
        {
            v.push_back(nums);
        }
        return v;
    }
};