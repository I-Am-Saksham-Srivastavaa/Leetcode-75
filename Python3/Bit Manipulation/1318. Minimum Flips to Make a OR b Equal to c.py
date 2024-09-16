""" 1318. Minimum Flips to Make a OR b Equal to c
Difficulty: Medium
Submission Link: https://leetcode.com/problems/minimum-flips-to-make-a-or-b-equal-to-c/submissions/1388958287/ """

class Solution:
    def minFlips(self, a: int, b: int, c: int) -> int:
        res = 0
        while c or a or b:
            curr_c = c & 1
            curr_a = a & 1
            curr_b = b & 1
            if (curr_c) != (curr_a or curr_b):

                res += 1
                if not curr_c and (curr_a and curr_b):
                    res += 1

            c >>= 1
            a >>= 1
            b >>= 1
        
        return res