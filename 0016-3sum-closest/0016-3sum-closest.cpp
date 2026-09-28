class Solution {
public:
    int getDiff(int sum, int target)
    {
       return abs(target - sum);
    }

    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int i = 0;
        int n = nums.size();
        int minDiff = INT_MAX;
        int closestSum = INT_MAX;
        while (i < n)
        {
            if(i != 0 && nums[i] == nums[i - 1])
            {
                i++;
                continue;
            }

            int j = i + 1;
            int end = n - 1;
            while(j < end)
            {
                int sum = nums[i] + nums[j] + nums[end];
                int currDiff = getDiff(sum, target);
                if(currDiff < minDiff)
                {
                    minDiff = currDiff;
                    closestSum = sum;
                }
                if(sum == target) return sum;
                else if(sum < target) j++;
                else if(sum > target) end--;
            }
            i++;
        }

        return closestSum;
    }
};