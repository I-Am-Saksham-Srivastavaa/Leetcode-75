""" 2390. Removing Stars From a String
Difficulty: Easy
Submission Link: https://leetcode.com/problems/removing-stars-from-a-string/submissions/1375560983/ """

class Solution(object):
    def removeStars(self, s):
        stack = []
        for c in s:
            if c == '*' and stack:
                stack.pop()
            else:
                stack.append(c)
        return ''.join(stack)