class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        currMax = nums[0]
        maxSum = nums[0]

        for i in range(1, len(nums)):
            if currMax < 0:
                currMax = nums[i]

            else:
                currMax += nums[i]

            maxSum = max(maxSum, currMax)
        
        return maxSum
        