class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minCost = prices[0], profit = 0, maxProfit = 0;
        for(int i = 1; i < prices.size(); i++)
        {
            profit = prices[i] - minCost;
            maxProfit = max(maxProfit, profit);
            minCost = min(minCost, prices[i]);
        }
        return maxProfit;
    }
};