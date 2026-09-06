class Solution {
public:

    int lowerBound(vector<int> &nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] >= target)
            right = mid - 1;
        else
            left = mid + 1;
    }

    return left;
    }

    int upperBound(vector<int> &nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] > target)
            right = mid - 1;
        else
            left = mid + 1;
    }

    return left;
}




    vector<int> searchRange(vector<int>& nums, int target) {
        int lb = lowerBound(nums, target);
        int hb = upperBound(nums, target);

        if (lb < nums.size() && nums[lb] == target)
        return {lb, hb - 1};

        return {-1, -1};
    }
};