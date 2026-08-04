class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> temp;
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i+1; j < nums.size(); j++ )
            {
                if(nums[i] + nums[j] == target)
                {
                    temp.emplace_back(i);
                    temp.emplace_back(j);
                    return temp;
                }
            }
        }
        return temp;
    }
};