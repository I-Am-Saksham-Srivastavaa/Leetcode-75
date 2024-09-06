""" 151. Reverse Words in a String
Difficulty: Medium
Submission Link: https://leetcode.com/problems/reverse-words-in-a-string/submissions/1017557618/ """

class Solution:
    def reverseWords(self, s: str) -> str:
        words = s.split()
        return ' '.join(words[::-1])