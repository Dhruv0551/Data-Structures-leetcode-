class Solution {
public:

    int returnMax(vector<int> &nums)
    {
        int maxEl = INT_MIN;
        for(int x: nums) maxEl = max(x, maxEl);
        return maxEl;
    }

    bool CheckValidity(vector<int> &nums, int currMax, int clusterSize, int reqChunks)
    {
        int adj_el = 0;
        int countChunks = 0;
        for(int x: nums)
        {
            if (x <= currMax)
            {
                adj_el++;
                if(adj_el == clusterSize)
                {
                    adj_el = 0;
                    countChunks++;
                }
            }
            else adj_el = 0;
        }

        return countChunks >= reqChunks;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        if((1LL * m * k) > bloomDay.size()) return -1;

        int right = returnMax(bloomDay);
        int left = 1;

        while(left < right)
        {
            int mid = left + (right - left) / 2;

            if(CheckValidity(bloomDay, mid, k, m))  right = mid;
            else left = mid + 1;
        }

        return right;
    }
};