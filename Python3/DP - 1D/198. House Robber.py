""" 198. House Robber
Difficulty: Medium
Submission Link: https://leetcode.com/problems/house-robber/submissions/1153674627/ """

class Solution:
    def rob(self, nums: List[int]) -> int:
        length=len(nums)
        if length==0:
            return 0
        dp=[0]*length
        if length==1:
            dp[0]=nums[0]
        elif length==2:
            dp[0]=nums[0]
            dp[1]=max(nums[0],nums[1])
        else:
            dp[0] = nums[0]
            dp[1] = max(nums[0], nums[1])
            for i in range(2,length):
                dp[i]=max(dp[i-2]+nums[i],dp[i-1])
        return dp[length-1]