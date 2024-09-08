""" Maximum Average Subarray I
Difficulty: Easy
Submission Link: https://leetcode.com/problems/maximum-average-subarray-i/submissions/1379177758/ """

class Solution:
    def findMaxAverage(self, nums: list[int], k: int) -> float:
        sum_val = sum(nums[:k])
        ans = -float('inf')

        for l in range(len(nums) - k + 1):
            avg = sum_val / k
            ans = max(ans, avg)
            if l + k < len(nums):
                sum_val -= nums[l]
                sum_val += nums[l + k]

        return ans