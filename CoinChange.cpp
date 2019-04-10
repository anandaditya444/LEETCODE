322. Coin Change Dynamic Programming

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1,-1);
        dp[0] = 0;
        for(int i=1;i<=amount;i++)
        {
            for(auto c:coins)
            {
                if(i-c >= 0 && dp[i-c] != -1)
                    dp[i] = dp[i] > 0 ? min(dp[i],dp[i-c]+1) : dp[i-c]+1;
            }
        }
        return dp[amount];
    }
};