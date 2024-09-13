""" 11. Container With Most Water
Difficulty: Medium
Submission Link: https://leetcode.com/problems/container-with-most-water/submissions/1247602575/ """

class Solution(object):
    def maxArea(self, height):
        ans=0
        s=0
        e=len(height)-1
        while s<e:
            area=(e-s)*min(height[s],height[e])
            ans=max(area,ans)
            if height[s]<height[e]:
                s+=1
            else:
                e-=1
        return ans