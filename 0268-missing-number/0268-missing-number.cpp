class Solution {
public:
    int missingNumber(vector<int>& nums) {
        short int sum1 = 0;
        short int sum2 = 0;

        for (int i = 1; i <= nums.size(); i++)
        {
            sum1+=i;
            sum2+=nums[i - 1];
        }

        return sum1 - sum2;
    }
};