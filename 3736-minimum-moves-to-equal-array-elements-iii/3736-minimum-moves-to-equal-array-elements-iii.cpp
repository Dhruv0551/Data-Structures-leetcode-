class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxEl = *max_element(nums.begin(), nums.end()) * nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);


            return abs(sum - maxEl);
    }
};