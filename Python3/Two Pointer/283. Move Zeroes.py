"""  283. Move Zeroes
Difficulty: Easy
Submission Link: https://leetcode.com/problems/move-zeroes/submissions/1246678311/
 """

class Solution:
    def moveZeroes(self, nums: list[int]) -> None:
        left = 0

        for right in range(len(nums)):
            if nums[right] != 0:
                nums[right], nums[left] = nums[left], nums[right]
                left += 1
        
        return nums