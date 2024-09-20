""" 1493. Longest Subarray of 1's After Deleting One Element 
Difficulty: Medium
Submission Link: https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/submissions/1391219977/
"""

class Solution:
    def longestSubarray(self, nums: List[int]) -> int:
        prevWindow = 0
        currWindow = 0
        max_length = 0

        for num in nums:
            if num == 0:
                max_length = max(max_length, prevWindow + currWindow)
                prevWindow = currWindow
                currWindow = 0
            else:
                currWindow += 1

        if currWindow == len(nums):
            return currWindow - 1

        max_length = max(max_length, prevWindow + currWindow)
        return max_length