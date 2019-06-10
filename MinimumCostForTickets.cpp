//Q. 983

class Solution {
public:
    set<int>s;
    int memo[366];
    vector<int>cost;
    int ans = 0;
    
    int dp(int i)
    {
        if(i > 365)
            return 0;
        if(memo[i] != -1)
            return memo[i];
        if(s.count(i))
            ans = min(dp(i+1)+cost[0],min(dp(i+7)+cost[1],dp(i+30)+cost[2]));
        else
            ans = dp(i+1);
        memo[i] = ans;
        
        return ans;
    }
    
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        for(auto x:days)
            s.insert(x);
        cost = costs;
        memset(memo,-1,sizeof(memo));
       
        return dp(days[0]);
    }
};