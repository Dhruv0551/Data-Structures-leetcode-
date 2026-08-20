class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int maxCriteria = nums.size() / 3;
        vector<int> ans;
        unordered_map<int, int> mpp;
        for(int &x: nums){
            mpp[x]++;
            if(mpp[x] == maxCriteria + 1)
                ans.push_back(x);
        }
        return ans;
    }
};