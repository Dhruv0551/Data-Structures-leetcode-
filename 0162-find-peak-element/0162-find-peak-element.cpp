class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size() - 1;

        if(!n) return n;

        int left = 0;
        int right = n;

        while(left < right)
        {
            int mid = (right + left) / 2;

            if(nums[mid] < nums[mid + 1])
            {
                left = mid + 1;
            }
            else right = mid;

        }      
        return right;

    }
};