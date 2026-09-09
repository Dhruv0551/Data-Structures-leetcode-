class Solution {
public:
    int compare(int a, int b) {
        int n = a - b;
        if (n < 0)
            return -n;
        return n;
    }
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        int minEl = INT_MAX;
        while (left <= right) {
            if (nums[left] < nums[right])
                minEl = min(minEl, nums[left]);

            int mid = left + (right - left) / 2;

            if (nums[mid] < minEl)
                minEl = nums[mid];

            if (compare(nums[left], nums[mid]) >=
                compare(nums[mid], nums[right])) {
                right = mid - 1;
            } else
                left = mid + 1;
        }
        return minEl;
    }
};