""" 1732. Find the Highest Altitude
Difficulty: Easy
Submission Link: https://leetcode.com/problems/find-the-highest-altitude/submissions/1379773561/ """

class Solution:
    def largestAltitude(self, gain: list[int]) -> int:
        sum = 0
        max_alt = 0
        
        for g in gain:
            sum += g
            max_alt = max(max_alt, sum)
        
        return max_alt