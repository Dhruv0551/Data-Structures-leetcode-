class Solution {
public:
    int countElements(vector<int>& nums) {
        int maxEl = *max_element(nums.begin(), nums.end());
        int minEl = *min_element(nums.begin(), nums.end());
        int count = 0;
        for(auto &x: nums)
        {
            if(x != minEl && x != maxEl) count++;
        }

        return count;
    }
};