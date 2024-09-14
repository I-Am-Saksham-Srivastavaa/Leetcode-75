""" 875. Koko Eating Bananas
Difficulty: Medium
Submission Link: https://leetcode.com/problems/koko-eating-bananas/submissions/1376886153/ """

class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        # k small, h large. 
        
        def counter(k):
            count = 0
            for pile in piles:
                count += math.ceil(pile/k)
            return count
        start, end = 1, max(piles)
        while start < end:
            mid = (start+end) //2 
            temp_h = counter(mid)
            if temp_h <= h:
                end = mid
            else:
                start = mid +1
        
        return start