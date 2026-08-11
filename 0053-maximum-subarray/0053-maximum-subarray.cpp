class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int currMax = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (currMax < 0)
                currMax = nums[i];
            else
                currMax += nums[i];
            maxSum = max(currMax, maxSum);
        }

        return maxSum;
    }
};