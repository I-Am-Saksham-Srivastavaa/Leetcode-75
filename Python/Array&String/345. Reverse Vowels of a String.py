""" 345. Reverse Vowels of a String
Difficulty: Easy
Submission Link: https://leetcode.com/problems/reverse-vowels-of-a-string/submissions/1017551627
 """

class Solution(object):
    def reverseVowels(self, s):
        vowels = "aeiouAEIOU"
        s = list(s)
        left, right = 0, len(s) - 1
        
        while left < right:
            while left < right and s[left] not in vowels:
                left += 1
            while left < right and s[right] not in vowels:
                right -= 1
            
            s[left], s[right] = s[right], s[left]
            left += 1
            right -= 1
        
        return ''.join(s)