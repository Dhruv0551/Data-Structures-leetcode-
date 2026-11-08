class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        if (n < 2) return 0;

        vector<int> leftProfit(n, 0);
        vector<int> rightProfit(n, 0);

        int cost = prices[0];

        for (int i = 1; i < n; i++) {
            cost = min(cost, prices[i]);
            leftProfit[i] = max(leftProfit[i - 1], prices[i] - cost);
        }

        int sellingPrice = prices[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            sellingPrice = max(sellingPrice, prices[i]);
            rightProfit[i] = max(rightProfit[i + 1], sellingPrice - prices[i]);
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            ans = max(ans, leftProfit[i] + rightProfit[i]);
        }

        return ans;
    }
};