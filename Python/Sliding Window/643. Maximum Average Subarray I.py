""" Maximum Average Subarray I
Difficulty: Easy
Submission Link: https://leetcode.com/problems/maximum-average-subarray-i/submissions/1379177878/ """

class Solution(object):
    def findMaxAverage(self, nums, k):
        s = sum(nums[:k])
        ans = s
        for i in range(k, len(nums)):
            s += nums[i] - nums[i - k]
            ans = max(ans, s)
        return ans / (k * 1.0)