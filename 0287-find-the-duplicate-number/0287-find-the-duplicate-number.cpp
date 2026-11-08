class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> freq(size(nums), 0);

        for(auto &x: nums)
        {
            freq[x]++;
            if(freq[x] > 1) return x;
        }

        return -1;
    }
};