class Solution {
public:

    int getDiff(int sum, int target)
    {
        return abs(target - sum);
    }

    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0;
        int closestSum = INT_MAX;
        int minDiff = INT_MAX;
        while (i < n)
        {
            if(i > 0 && nums[i] == nums[i - 1])
            {
                i++;
                continue;
            }

            int j = i + 1;
            int k = n - 1;
            while(j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];

                int currDiff = getDiff(sum, target);

                if(currDiff < minDiff)
                {
                    closestSum = sum;
                    minDiff = currDiff;
                }

                if(sum < target)
                    j++;
                
                else if(sum > target)
                    k--;

                else {
                    return sum;
                }
            }

            i++;
        }

        return closestSum;
    }
};