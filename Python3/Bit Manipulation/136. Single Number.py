""" 136. Single Number
Difficulty: Easy
Submission Link: https://leetcode.com/problems/single-number/submissions/1386409629/ """

class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        x = 0
        for i in range(len(nums)):
            x = x^nums[i]
        return x