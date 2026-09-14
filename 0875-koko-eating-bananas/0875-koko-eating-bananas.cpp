class Solution {
public:

    int maxElement(vector<int> &nums)
    {
        int n = nums[0];
        for(int x: nums)
            n = max(n, x);

        return n;
    }

    int minHours(vector<int> &nums, int divisor)
    {
        int sum = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i] / divisor;
            if (nums[i] % divisor != 0)
                sum++;

        }

        return sum;
    }


    int minEatingSpeed(vector<int>& nums, int h) {
        int higherBound = maxElement(nums);
        int left = 1;

        while(left < higherBound)
        {
            int mid = left + (higherBound - left) / 2;

            if(minHours(nums, mid) <= h)
                higherBound = mid;
            
            else left = mid + 1;
        }


        return left;
    }
};