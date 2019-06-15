//Q/ 1029

class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int sz = costs.size();
       sort(costs.begin(),costs.end(),[&](vector<int>&a,vector<int>&b){ return (a[0]-a[1] < b[0]-b[1]);});
           //maximizing the profit for A.
            int ans = 0;
           for(int i=0;i<sz/2;i++)
           {
               ans += costs[i][0];
           }
           for(int i=sz/2;i<sz;i++)
           {
               ans += costs[i][1];
           } 
        return ans;
    }
};