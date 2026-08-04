class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp;

        for(int x: nums)
        {
            if(x != 0)
            temp.push_back(x);
        }

        while(temp.size() < nums.size())
        {
            temp.push_back(0);
        }
        nums = temp;
    }
};