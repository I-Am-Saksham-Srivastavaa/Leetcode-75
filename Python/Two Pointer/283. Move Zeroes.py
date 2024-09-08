"""  283. Move Zeroes
Difficulty: Easy
Submission Link: https://leetcode.com/problems/move-zeroes/submissions/1246678513/ """

class Solution(object):
    def moveZeroes(self, nums):
        zeroIndex = 0
        currIndex = 0
        for i,n in enumerate(nums):
            if nums[zeroIndex] != 0 and n == 0:
                zeroIndex = i
            elif n != 0:
                nums[zeroIndex], nums[i] = nums[i], nums[zeroIndex]
                zeroIndex += 1          


        
        