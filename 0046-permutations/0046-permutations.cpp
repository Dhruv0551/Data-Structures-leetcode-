class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<bool> checked(nums.size(), false);

        permutation(nums, ans, temp, checked);

        return ans; 
    }

void permutation(vector<int> &nums, vector<vector<int>> &ans, vector<int> &temp, vector<bool> &checked)
{
    if (temp.size() == checked.size())
        ans.push_back(temp);

    for (int i = 0; i < (int)checked.size(); i++)
    {
        if (checked[i] == 0)
        {
            temp.push_back(nums[i]);
            checked[i] = true;
            permutation(nums, ans, temp, checked);
            checked[i] = 0;
            temp.pop_back();
        }
    }
}
};