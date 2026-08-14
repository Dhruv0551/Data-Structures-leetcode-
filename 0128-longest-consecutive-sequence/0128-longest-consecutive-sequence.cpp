class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int maxCount = 1;
        unordered_set<int> st(nums.begin(), nums.end());

        for(auto it: st)
        {
            if(st.find(it-1) == st.end())
            {
                int count = 1;
                int x = it;
                while(st.find(x + 1) != st.end())
                {
                    count++;
                    x++;
                }
                maxCount = max(maxCount, count);
            }
        }
        return maxCount;
    }
};