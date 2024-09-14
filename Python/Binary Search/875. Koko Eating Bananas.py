""" 875. Koko Eating Bananas
Difficulty: Medium
Submission Link: https://leetcode.com/problems/koko-eating-bananas/submissions/1376886542/ """

class Solution(object):
    def minEatingSpeed(self, piles, h):
        left = 1
        right = max(piles)
        
        while left < right:
            mid = (left + right) / 2
            if self.canEatAll(piles, mid, h):
                right = mid
            else:
                left = mid + 1
        
        return left
    
    def canEatAll(self, piles, speed, h):
        time = 0
        for pile in piles:
            time += (pile - 1) / speed + 1
            if time > h:
                return False
        return True