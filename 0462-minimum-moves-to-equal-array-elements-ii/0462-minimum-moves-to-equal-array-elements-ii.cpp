class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        if(n < 2) return 0;
        sort(nums.begin(), nums.end());
        int median = nums[n/2];
        int steps = 0;
        for(const auto &x: nums) steps += abs(x - median);


        return steps;
    }
};