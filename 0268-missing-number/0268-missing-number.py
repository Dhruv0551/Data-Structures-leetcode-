class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        sum_of_arr = 0
        for i in  range(1, len(nums) + 1):
            sum_of_arr+=i

        return sum_of_arr - sum(nums)
        