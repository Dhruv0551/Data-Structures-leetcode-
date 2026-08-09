class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map_dict = {}
        for i in range(len(nums)):
            curr = nums[i]
            more = target - curr

            if more in map_dict:
                return [i, map_dict[more]]

            map_dict[curr] = i

        return -1
