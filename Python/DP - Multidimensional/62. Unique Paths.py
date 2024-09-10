""" 62. Unique Paths
Difficulty: Medium
Submission Link: https://leetcode.com/problems/unique-paths/submissions/1041431512/ """

import math
class Solution(object):
    def uniquePaths(self, m, n):
        return math.factorial(m+n-2)/(math.factorial(m-1)*math.factorial(n-1))
        