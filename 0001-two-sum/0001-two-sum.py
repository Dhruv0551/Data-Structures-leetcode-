class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        nums_map = {}
        for i in range(len(nums)):
            num = nums[i]
            more = target - num

            if more in nums_map:
                return [nums_map[more], i]

            nums_map[num] = i