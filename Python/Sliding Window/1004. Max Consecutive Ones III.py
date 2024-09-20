""" 1004. Max Consecutive Ones III 
Difficulty: Medium
Submission Link: https://leetcode.com/problems/max-consecutive-ones-iii/submissions/1391226197/ """

class Solution(object):
    def longestOnes(self, nums, k):
        i, j = 0, 0
        while j < len(nums):
            if nums[j] == 0:
                k -= 1
            if k < 0:
                if nums[i] == 0:
                    k += 1
                i += 1
            j += 1
        
        return j - i