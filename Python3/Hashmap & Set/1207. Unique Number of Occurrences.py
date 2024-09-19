""" 1207. Unique Number of Occurrences
Difficulty: Easy
Submission Link: https://leetcode.com/problems/unique-number-of-occurrences/submissions/1148976975/
 """

class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        frequency = {}
        for num in arr:
            frequency[num] = frequency.get(num,0) + 1
        return len(frequency) == len(set(frequency.values()))