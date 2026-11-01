class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mpp;

        for(int i = 0; i < size(nums); i++)
        {
            mpp[nums[i]]++;
        }

        for(const auto [key, value]: mpp)
        {
            if(value < 3) return key;
        }

        return -1;
    }
};