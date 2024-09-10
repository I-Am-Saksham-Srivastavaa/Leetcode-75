""" 338. Counting Bits
Difficulty: Medium
Submiission Link: https://leetcode.com/problems/counting-bits/submissions/1037894519/
 """

class Solution:
    def countBits(self, n: int) -> list[int]:
        sum=0
        list1 = []
        for i in range(n+1):
            sum=bin(i).count("1")
            list1.append(sum)
        return list1