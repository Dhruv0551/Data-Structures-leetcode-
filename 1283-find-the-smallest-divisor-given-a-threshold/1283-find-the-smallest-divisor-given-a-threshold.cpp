class Solution {
public:
    int getMax(vector<int> &nums)
    {
        int maxEl = INT_MIN;
        for(int x: nums) maxEl = max(maxEl, x);
        return maxEl;
    }

    int getDivisor(vector<int> &nums, int divisor)
    {
        int sum = 0;

        for(int x: nums)
        {
            if(x % divisor != 0) sum += (x / divisor) + 1;
            else sum += x / divisor;
        }

        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int left = 1;
        int right = getMax(nums);

        while(left < right)
        {
            int mid = left + (right - left) / 2;

            if(getDivisor(nums, mid) <= threshold) right = mid;
            else left = mid + 1;
        }

        return right;
    }
};