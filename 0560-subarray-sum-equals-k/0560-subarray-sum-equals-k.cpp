class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    int sum = 0;
    int count = 0;
    for (int i = 0; i < (int)nums.size(); i++)
    {
        for (int j = i; j < (int)nums.size(); j++)
        {
            sum += nums[j];
            if (sum == k)
                count++;
        }
        sum = 0;
    }
    return count;
    }
};