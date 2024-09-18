""" 724. Find Pivot Index
Difficulty: Easy
Submission Link: https://leetcode.com/problems/find-pivot-index/submissions/1383569944/ """

class Solution(object):
    def pivotIndex(self, nums):
        n=len(nums)
        start=[0 for i in range(n)]
        end=[0 for i in range(n)]
        sum=0
        for i in range(n):
            sum+=nums[i]
            start[i]=sum
        sum=0
        for i in range(n-1,-1,-1):
            sum+=nums[i]
            end[i]=sum
        for i in range(n):
            if(start[i]==end[i]):
                return i
        return -1