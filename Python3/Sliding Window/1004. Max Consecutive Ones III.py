""" 1004. Max Consecutive Ones III 
Difficulty: Medium
Submission Link: https://leetcode.com/problems/max-consecutive-ones-iii/submissions/1391225751/ """

class Solution:
    def longestOnes(self, nums: List[int], k: int) -> int:
        l = 0
        max_num = 0

        for r in range(len(nums)):
            k -= 1 - nums[r]

            if k < 0:
                k += 1 - nums[l]
                l += 1
            else:
                max_num = max(max_num, r - l + 1)

        return max_num