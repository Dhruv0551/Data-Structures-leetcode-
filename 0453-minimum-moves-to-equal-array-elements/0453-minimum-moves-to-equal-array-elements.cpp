class Solution {
public:
    int minMoves(vector<int>& nums) {
        int min = *min_element(nums.begin(), nums.end());
        int count = 0;
        for(auto &x: nums)
        {
            count += abs(x-min);
        }

        return count;
    }
};