""" 1137. N-th Tribonacci Number
Difficulty: Easy
Submission Link: https://leetcode.com/problems/n-th-tribonacci-number/submissions/1377975794/ """

class Solution(object):
    def tribonacci(self, n):
        t = [0, 1, 1]

        for i in range(3, n + 1):
            t.append(t[i - 1] + t[i - 2] + t[i - 3])
        
        return t[n]