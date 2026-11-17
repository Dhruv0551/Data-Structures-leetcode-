class Solution {
public:
    vector<int> getPrefix(vector<int>& nums) {
        vector<int> ans(size(nums));
        int currMax = INT_MIN;

        for (int i = 0; i < size(nums); i++) {
            currMax = max(currMax, nums[i]);
            ans[i] = currMax;
        }

        return ans;
    }

    vector<int> getSuffix(vector<int>& nums) {
        vector<int> ans(size(nums));
        int currMax = INT_MIN;
        for (int i = size(nums) - 1; i >= 0; i--) {
            if (nums[i] > currMax)
                currMax = nums[i];
            ans[i] = currMax;
        }
        return ans;
    }

    int trap(vector<int>& height) {
        vector<int> prefix = getPrefix(height);
        vector<int> suffix = getSuffix(height);

        int water = 0;
        for (int i = 0; i < size(height); i++) {
            if (height[i] < prefix[i] && height[i] < suffix[i]) {
                water += min(prefix[i], suffix[i]) - height[i];
            }
        }

        return water;
    }
};