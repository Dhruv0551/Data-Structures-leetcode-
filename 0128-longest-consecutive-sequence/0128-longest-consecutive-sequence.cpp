class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> st(nums.begin(), nums.end());
        int maxCount = 0;

        for(auto x : st)
        {
            if(st.find(x - 1) == st.end())
            {
                int count = 0;
                int temp = x;

                while(st.find(temp) != st.end())
                {
                    temp++;
                    count++;
                }

                maxCount = max(maxCount, count);
            }
        }

        return maxCount;
    }
};