class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> temp(nums.size());
        int posIndex = 0;
        int negIndex = 1;

        for (int x: nums)
        {
            if(x > 0)
            {
                temp[posIndex] = x;
                posIndex += 2;
            }
            else
            {
                temp[negIndex] = x;
                negIndex += 2;
            }
        }

        return temp;
    }
};