""" 1431. Kids With the Greatest Number of Candies
Difficulty: Easy
Submission Link: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/submissions/1017418134
 """

class Solution:
    def kidsWithCandies(self, candies: list[int], extraCandies: int) -> list[bool]:
        max_candies = max(candies)
        result = []
        
        for candies_count in candies:
            result.append(candies_count + extraCandies >= max_candies)
        
        return result
    