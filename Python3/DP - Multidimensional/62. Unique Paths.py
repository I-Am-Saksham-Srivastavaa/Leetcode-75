""" 62. Unique Paths
Difficulty: Medium
Submission Link: https://leetcode.com/problems/unique-paths/submissions/1041429047/ """

class Solution:
    def uniquePaths(self, m: int, n: int) -> int:

        aboveRow = [1] * n

        for _ in range(m - 1):
            currentRow = [1] * n
            for i in range(1, n):
                currentRow[i] = currentRow[i-1] + aboveRow[i]
            aboveRow = currentRow
        
        return aboveRow[-1]