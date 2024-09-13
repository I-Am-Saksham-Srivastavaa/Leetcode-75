""" 1679. Max Number of K-Sum Pairs
Difficulty: Medium
Submission Link : https://leetcode.com/problems/max-number-of-k-sum-pairs/submissions/1247607805/ """

class Solution(object):
    def maxOperations(self, nums, k):
        nums.sort()
        res, left, right = 0, 0, len(nums) - 1

        while left < right:
            if (nums[left] + nums[right]) == k:
                res += 1
                left += 1
                right -= 1

            elif (nums[left] + nums[right] < k)        :
                left += 1

            else:
                right -= 1
                
        return res
        