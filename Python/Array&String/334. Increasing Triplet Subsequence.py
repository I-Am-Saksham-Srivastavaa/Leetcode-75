""" 334. Increasing Triplet Subsequence
Difficulty: Medium
https://leetcode.com/problems/increasing-triplet-subsequence/submissions/1383516666/
 """

class Solution(object):
    def increasingTriplet(self, nums):
        smallestNum = float("inf")
        secondSmallestNum = float("inf")
        n = len(nums)

        for i in range(n):
            num = nums[i]
            if num <= smallestNum:
                smallestNum = num
            else:
                if num <= secondSmallestNum:
                    secondSmallestNum = num
                else:
                    return True
        
        return False