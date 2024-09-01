""" 1768. Merge Strings Alternately
Difficulty: Easy
Submission Link: https://leetcode.com/problems/merge-strings-alternately/submissions/1016834952/ """

class Solution(object):
    def mergeAlternately(self, word1, word2):
        len1 = len(word1)
        len2 = len(word2)
        
        merged = []
        i, j = 0, 0
        
        while i < len1 and j < len2:
            merged.append(word1[i])
            merged.append(word2[j])
            i += 1
            j += 1
        
        while i < len1:
            merged.append(word1[i])
            i += 1
        
        while j < len2:
            merged.append(word2[j])
            j += 1
        
        return ''.join(merged)