""" 1679. Max Number of K-Sum Pairs
Difficulty: Medium
Submission Link : https://leetcode.com/problems/max-number-of-k-sum-pairs/submissions/1247607661/ """

class Solution:
    def maxOperations(self, nums: List[int], k: int) -> int:
        nums.sort()
        res, l, r = 0, 0 ,len(nums) - 1

        while l < r:
            S = nums[l] + nums[r]
            if S > k:
                r -= 1
            elif S < k:
                l += 1
            else:
                res += 1
                l += 1
                r -= 1
        return res