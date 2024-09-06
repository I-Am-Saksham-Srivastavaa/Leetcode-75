""" 151. Reverse Words in a String
Difficulty: Medium
Submission Link: https://leetcode.com/problems/reverse-words-in-a-string/submissions/1017558679/ """

class Solution(object):
    def reverseWords(self, s):
        words = s.split() 
        reversed_words = words[::-1]
        
        return ' '.join(reversed_words)