""" 136. Single Number
Difficulty: Easy
Submission Link: https://leetcode.com/problems/single-number/submissions/1386409731/ """

class Solution(object):
    def singleNumber(self, nums):
        x = 0
        for i in range(len(nums)):
            x = x^nums[i]
        return x