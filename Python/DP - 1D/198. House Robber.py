""" 198. House Robber
Difficulty: Medium
Submission Link: https://leetcode.com/problems/house-robber/submissions/1153674489/ """

class Solution(object):
    def rob(self, nums):
        prev_max = 0
        curr_max = 0
        for num in nums:
            prev_max, curr_max = curr_max, max(prev_max + num, curr_max)
        return curr_max