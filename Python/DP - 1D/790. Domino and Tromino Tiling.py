""" 790. Domino and Tromino Tiling
Difficulty: Medium
Submission Link: https://leetcode.com/problems/domino-and-tromino-tiling/submissions/1377996123/ """

class Solution(object):
    def numTilings(self, n):
        cache = {}
        def dp(n):
            if n in cache:
                return cache[n]
            if n == 0:
                return 1
            if n == 1:
                return 1
            if n == 2:
                return 2
            res = dp(n-1) + dp(n-2)
            i = n - 3
            while i > -1:
                res += 2 * dp(i)
                i -= 1
            cache[n] = res
            return res
        return dp(n) % (10**9 + 7)