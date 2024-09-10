""" 338. Counting Bits
Difficulty: Medium
Submiission Link: https://leetcode.com/problems/counting-bits/submissions/1037894416/ """

class Solution(object):
    def countBits(self, num):
        res = [0]
        while len(res) <= num:
            res += [i+1 for i in res]
        return res[:num+1]