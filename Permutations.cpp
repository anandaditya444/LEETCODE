class Solution {
public:
    
    int factorial(int n)
    {
        if(n==0 || n==1)
            return 1;
        return n*factorial(n-1);
    }
    //next_permutation function is used here.
    vector<vector<int>> permute(vector<int>& nums) {
        int n = factorial(nums.size());
        sort(nums.begin(),nums.end());
        vector<vector<int> >v;
        v.push_back(nums);
        for(int i=2;i<=n;i++)
        {
            next_permutation(nums.begin(),nums.end());
            v.push_back(nums);
        }
        return v;
    }
};