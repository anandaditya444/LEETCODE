class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
       map<int,pair<int,vector<int>>>m;
        vector<int>v;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            m[nums[i]].first++;
            m[nums[i]].second.push_back(i);
        }
         //   m[nums[i]]++;
        int ans = 0;
       // int ff = 0;
        for(auto x:m)
        {
            if(x.second.first > ans)
            {
                ans = x.second.first;
                //ff = x.first;
            }
        }
       // cout<<ans<<endl;
        for(auto x:m)
        {
            if(x.second.first == ans)
                v.push_back(x.first);
        }
        int final_ans = 1e9;
        for(auto x:v)
        {
           // cout<<x<<" ";
            // int start_pos = lower_bound(nums.begin(),nums.end(),x)-nums.begin();
            // int end_pos = upper_bound(nums.begin(),nums.end(),x)-nums.begin();
           // cout<<"pos "<<end_pos-start_pos<<" ";
            final_ans = min(final_ans,m[x].second.back()-m[x].second[0]+1);
        }
        
        return final_ans;
    }
};