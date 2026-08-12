class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> temp1;
        vector<int> temp2;
        for(int x: nums)
            if (x > 0)
                temp1.push_back(x);
            else
                temp2.push_back(x);
        int n = nums.size();
        nums.clear();
        int i = 0, j = 0;
        while(i < n / 2 && j < n / 2)
        {
            nums.push_back(temp1[i]);
            i++;
            nums.push_back(temp2[j]);
            j++;
        }
        return nums;
    }
};