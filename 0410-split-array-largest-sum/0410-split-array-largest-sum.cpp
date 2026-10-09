class Solution {
public:

    bool SplitSum(vector<int> &nums, int capacity, int k)
    {
        int pile = 1;
        int limit = 0;
        for(auto &x: nums)
        {
            limit += x;
            if(limit > capacity)
            {
                pile++;
                limit = x;
            }
        }

        return pile <= k;
    }


    int splitArray(vector<int>& nums, int k) {
        int left = *max_element(nums.begin(), nums.end());
        int right = accumulate(nums.begin(), nums.end(), 0);

        while(left < right)
        {
            int mid = left + (right - left) / 2;

            if(SplitSum(nums, mid, k))
            {
                right = mid;
            }
            else left = mid + 1;
        }
        return left;    
    }
};