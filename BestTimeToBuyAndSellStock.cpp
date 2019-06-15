//Q. 121 Best Time To Buy And Sell Stock O(n) problem

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int minPrice = INT_MAX;
        for(int i=0;i<n;i++)
        {
            minPrice = min(minPrice,prices[i]);
            profit = max(profit,prices[i]-minPrice);
        }
        return profit;
    }
};