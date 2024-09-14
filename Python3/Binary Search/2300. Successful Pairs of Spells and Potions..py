""" 2300. Successful Pairs of Spells and Potions
Difficulty: Medium
Submisson Link: https://leetcode.com/problems/successful-pairs-of-spells-and-potions/submissions/1376870229/ """

class Solution:
    def successfulPairs(self, spells: List[int], potions: List[int], success: int) -> List[int]:
        n, _ = len(potions), potions.sort()
        return [n - bisect_left(potions, success / s) for s in spells]