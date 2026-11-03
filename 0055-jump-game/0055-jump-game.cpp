class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size() < 2) return true;

        int currFuel = nums[0];

        if(currFuel >= nums.size() - 1) return true;

        for(int i = 1; i < nums.size() - 1; i++) {
            if(currFuel <= 0) return false;

            currFuel--;

            currFuel = max(currFuel, nums[i]);

            if(i + currFuel >= nums.size() - 1)
                return true;
        }

        return false;
    }
};