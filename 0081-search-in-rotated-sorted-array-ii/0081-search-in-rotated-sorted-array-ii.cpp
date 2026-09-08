class Solution {
public:
    int search(vector<int>& nums, int k) {

        int left = 0;
        int right = nums.size() - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if(nums[mid] == k)
            {
                return 1;
            }

            if(nums[left] == nums[mid] && nums[right] == nums[mid])
            {
                left++;
                right--;
                continue;
            }

            if(nums[mid] >= nums[left])
            {
                if(nums[left] <= k && nums[mid] >= k)
                    right = mid - 1;
                
                else left = mid + 1;
            }

            else{
                if(nums[mid] <= k && nums[right] >= k)
                    left = mid + 1;
                else right = mid - 1;
            }
        }


        return 0;
    }
};