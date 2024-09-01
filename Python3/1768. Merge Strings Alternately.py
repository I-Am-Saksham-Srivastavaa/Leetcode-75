""" 1768. Merge Strings Alternately
Difficulty: Easy
Submission Link: https://leetcode.com/problems/merge-strings-alternately/submissions/1375628956/ """

class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        merged = []

        for a, b in zip(word1, word2):
            merged.append(a + b)
        
        merged.append(word1[len(word2):])
        merged.append(word2[len(word1):])

        return "".join(merged)