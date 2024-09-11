""" 452. Minimum Number of Arrows to Burst Balloons
Difficulty: Medium
Submission Link: https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/submissions/1383581500/ """

class Solution:
    def findMinArrowShots(self, points: list[list[int]]) -> int:
        if not points:
            return 0
        points.sort(key=lambda x: x[1])
        
        arrows = 1
        end = points[0][1]
        
        for balloon in points:
            start, end_of_balloon = balloon
            if start > end:
                arrows += 1
                end = end_of_balloon
        return arrows
        