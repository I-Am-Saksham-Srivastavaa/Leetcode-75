""" 452. Minimum Number of Arrows to Burst Balloons
Difficulty: Medium
Submission Link: https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/submissions/1383581607/ """

class Solution:
    def findMinArrowShots(self, points):        
        points.sort(key=lambda x: x[1])
        
        arrows = 1
        prevEnd = points[0][1]
        for i in range(1, len(points)):
            if points[i][0] > prevEnd:
                arrows += 1
                prevEnd = points[i][1]
        
        return arrows