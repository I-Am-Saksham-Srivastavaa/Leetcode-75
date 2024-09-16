""" 746. Min Cost Climbing Stairs
Difficulty: Easy
Submission Link: https://leetcode.com/problems/min-cost-climbing-stairs/submissions/1377985526/
 """

class Solution(object):
    def minCostClimbingStairs(self, cost):
        for i in range(2, len(cost)):
            cost[i] += min(cost[i-1], cost[i-2])
        return min(cost[-1], cost[-2])