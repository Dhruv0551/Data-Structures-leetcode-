class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int maxCriteria = nums.size() / 3;
        vector<int> ans;
        unordered_map<int, int> mpp;
        for(int &x: nums)
            mpp[x]++;

        for(const auto& [key, value]: mpp)
        {
            if(value > maxCriteria)
                ans.push_back(key); 
        }

        return ans;
    }
};