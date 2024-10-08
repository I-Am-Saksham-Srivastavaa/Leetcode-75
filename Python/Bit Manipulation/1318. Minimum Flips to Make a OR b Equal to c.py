""" 1318. Minimum Flips to Make a OR b Equal to c
Difficulty: Medium
Submission Link: https://leetcode.com/problems/minimum-flips-to-make-a-or-b-equal-to-c/submissions/1388959832/ """

class Solution(object):
        def minFlips(self, a, b, c):
         ans = 0
         while a or b or c:
            x1 = a & 1
            x2 = b & 1
            x3 = c & 1
            if (x1 | x2) != x3:
                if x1 & x2:
                    ans += 2
                else:
                    ans += 1
            a = a >> 1
            b = b >> 1
            c = c >> 1
         return ans