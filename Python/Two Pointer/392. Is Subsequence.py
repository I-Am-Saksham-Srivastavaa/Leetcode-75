""" 392. Is Subsequence
Difficulty: Medium
Submission Link: https://leetcode.com/problems/is-subsequence/submissions/1246683747/ """

class Solution(object):
    def isSubsequence(self, s, t):
        for char in s:
            if char in t:
                f = t.index(char)
                t = t[f+1:]
            else:
                return False
        return True
        