class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 1;
        int n = nums.size() - 1;
        if (n == 0) return nums[0];
        int right = n - 1;

        if(nums[0] != nums[left]) return nums[0];
        if(nums[n] != nums[right]) return nums[n];

        while(left <= right)
        {
            int mid = left + (right - left) / 2;

            if(nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
            {
                return nums[mid];
                break;
            }

            if((mid % 2 != 0 && nums[mid] == nums[mid - 1]) 
            || (mid % 2 == 0 && nums[mid] == nums[mid + 1]))
            left = mid + 1;

            else right = mid - 1;

        }

        return -1;
    }
};