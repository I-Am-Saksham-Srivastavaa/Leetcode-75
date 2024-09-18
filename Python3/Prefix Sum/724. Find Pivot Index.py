""" 724. Find Pivot Index
Difficulty: Easy
Submission Link: https://leetcode.com/problems/find-pivot-index/submissions/1383569670/ """

class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        total = sum(nums)
        left_total = 0

        for i in range(len(nums)):
            right_total = total - left_total - nums[i]

            if right_total == left_total:
                return i
            
            left_total += nums[i]
        
        return -1