""" 1207. Unique Number of Occurrences
Difficulty: Easy
Submission Link: https://leetcode.com/problems/unique-number-of-occurrences/submissions/1148976846/ """
class Solution(object):
    def uniqueOccurrences(self, arr):
        counts = {}
        
        for num in arr:
            counts[num] = counts.get(num, 0) + 1

        unique_counts = set(counts.values())

        return len(counts) == len(unique_counts)
