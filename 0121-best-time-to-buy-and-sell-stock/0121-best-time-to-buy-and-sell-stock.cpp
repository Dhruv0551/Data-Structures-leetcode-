class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int minCost = nums[0], profit = 0, maxProfit = 0;
        for(int i = 1; i < nums.size(); i++)
        {
            profit = nums[i] - minCost;
            maxProfit = max(maxProfit, profit);
            minCost = min(minCost, nums[i]);
        }
        return maxProfit;
    }
};