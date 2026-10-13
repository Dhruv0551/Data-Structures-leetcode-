class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        if(nums.size() == 1) return nums[0] * nums[0];
        for(auto &x: nums) x = abs(x);

        sort(nums.begin(), nums.end());
        long long small_sum = 0;
        for(int i = 0; i <= (nums.size()) / 2 - 1; i++)
        {
            small_sum += (1LL * nums[i] * nums[i]);
        } 
        long long big_sum = 0;     
        for(int i = nums.size() / 2; i < nums.size(); i++)
        {
            big_sum += (1LL * nums[i] * nums[i]);
        }      
        

        return big_sum - small_sum;
    }
};