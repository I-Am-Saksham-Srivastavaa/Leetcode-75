""" 790. Domino and Tromino Tiling
Difficulty: Medium
Submission Link: https://leetcode.com/problems/domino-and-tromino-tiling/submissions/1377995912/ """

class Solution:
    def numTilings(self, n: int) -> int:
        mod = 10**9 + 7
        if n == 1:
            return 1
        if n == 2:
            return 2
        if n == 3:
            return 5

        dp = [0] * (n + 1)
        dp[0] = 1
        dp[1] = 1
        dp[2] = 2
        dp[3] = 5

        for i in range(4, n + 1):
            dp[i] = (2 * dp[i - 1] + dp[i - 3]) % mod

        return dp[n]