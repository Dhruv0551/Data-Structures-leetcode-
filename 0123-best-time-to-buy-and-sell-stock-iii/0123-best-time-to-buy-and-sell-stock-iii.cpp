class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = size(prices);
        if(n < 2) return 0;

        vector<int> leftProfit(n, 0);
        vector<int> rightProfit(n, 0);

        int leftMinCost = prices[0];
        for(int i = 1; i < n; i++)
        {
            leftMinCost = min(leftMinCost, prices[i]);
            leftProfit[i] = max(leftProfit[i-1], prices[i] - leftMinCost);
        }

        int rightMaxProf = prices[n-1];
        for(int i = n-2; i >= 0; i--)
        {
            rightMaxProf = max(rightMaxProf, prices[i]);
            rightProfit[i] = max(rightProfit[i+1], rightMaxProf - prices[i]);
        }


        int maxProfit = 0;
        for(int i = 0; i < n; i++)
        {
            maxProfit = max(maxProfit, rightProfit[i] + leftProfit[i]);
        }

        return maxProfit;
    }
};