class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int minSum = INT_MAX;
        int n = size(nums);

        for(int i = 0; i < n; i++)
        {
            int sum = nums[i];
            if(l == 1 && sum > 0)
            {
                minSum = min(minSum, sum);
            }
            for(int j = i + 1; j < n; j++)
            {
                if((j - i + 1) < l)
                {
                    sum += nums[j];
                    continue;
                }
                else if((j - i + 1) > r) break;


                sum += nums[j];
                if(sum > 0) minSum = min(minSum, sum);
            }
        }


        return (minSum == INT_MAX) ? -1 : minSum;
    }
};