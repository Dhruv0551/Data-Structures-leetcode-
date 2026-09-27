class Solution {
public:

    pair<int, int> getBoundary(vector<int> &nums)
    {
        int maxEl = INT_MIN;
        int sum = 0;
        for(int x: nums)
        {
            sum += x;
            maxEl = max(maxEl, x);
        }

        return {maxEl, sum};
    }


    int countPartitions(vector<int> &nums, int limit)
    {
        int stack = 1;
        int sum = 0;

        for(int x: nums)
        {
            sum += x;

            if(sum > limit)
            {
                stack++;
                sum = x;
            }
        }
        return stack;
    }

    int splitArray(vector<int>& nums, int k) {
        pair<int, int> boundary = getBoundary(nums);
        int left = boundary.first;
        int right = boundary.second;

        while(left < right)
        {
            int mid = left + (right - left) / 2;

            if(countPartitions(nums, mid) > k) left = mid + 1;
            else right = mid;
        }

        return right;
    }
};