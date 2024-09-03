""" 1431. Kids With the Greatest Number of Candies
Difficulty: Easy
Submission Link: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/submissions/1017416963
 """

class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        max_candies = max(candies)
        result = []
        
        for candy_count in candies:
            result.append(candy_count + extraCandies >= max_candies)
        
        return result