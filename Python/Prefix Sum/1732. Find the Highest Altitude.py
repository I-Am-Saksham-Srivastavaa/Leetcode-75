""" 1732. Find the Highest Altitude
Difficulty: Easy
Submission Link: https://leetcode.com/problems/find-the-highest-altitude/submissions/1379773696/ """

class Solution(object):
    def largestAltitude(self, gain):
        gain.insert(0, 0)
        length = len(gain)
        pfs = [0 for _ in range(length)]

        for i in range(1, length):
            pfs[i] = pfs[i - 1] + gain[i]
        
        return max(pfs)