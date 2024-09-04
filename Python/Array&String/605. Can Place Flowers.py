"""
605. Can Place Flowers
Difficulty: Easy
Submission Link:https://leetcode.com/problems/can-place-flowers/submissions/1017424240"""

class Solution(object):
    def canPlaceFlowers(self, flowerbed, n):
        count = 0
        i = 0
        
        while i < len(flowerbed):
            if flowerbed[i] == 0:
                if i == 0 or flowerbed[i - 1] == 0:
                    if i == len(flowerbed) - 1 or flowerbed[i + 1] == 0:
                        flowerbed[i] = 1
                        count += 1
            i += 1
            
        return count >= n