class Solution {
public:

    bool countPairDistance(vector<int> &nums, int m, int distance)
    {
        int currEl = nums[0];
        m--;
        for(int i = 1; i < nums.size(); i++)
        {
            if (m==0) break;
            if(nums[i] - currEl >= distance)
            {
                m--;
                currEl = nums[i];
            }
        }
        if (m==0) return true;
        return false;
    }


    int maxDistance(vector<int>& nums, int m) {
       sort(nums.begin(), nums.end());

       int maxEl = nums[nums.size() - 1];
       int minEl = nums[0];

        int left = 1;
        int right = maxEl - minEl;

        while(left < right)
        {
            int mid = left + (right - left + 1) / 2;

            if(countPairDistance(nums, m, mid))
                left = mid;
            
            else right = mid - 1;
        }

        return left;

    }
};