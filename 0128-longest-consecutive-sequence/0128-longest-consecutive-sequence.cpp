class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    int maxCount = 0;
    unordered_set<int> st(nums.begin(), nums.end());
    for(auto x: st)
    {
        int value = x;
        if(st.find(value - 1) == st.end())
        {
            int count = 0;
            while(st.find(value) != st.end())
            {
                count++;
                value++;
            }
            maxCount = max(maxCount, count);
        }
    }
    return maxCount;
    }
};