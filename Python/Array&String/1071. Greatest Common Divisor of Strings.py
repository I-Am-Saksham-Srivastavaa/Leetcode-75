""" 1071. Greatest Common Divisor of Strings
// Difficulty: Easy
// Link: https://leetcode.com/problems/greatest-common-divisor-of-strings/submissions/1017428995/ """

class Solution(object):
    def gcdOfStrings(self, str1, str2):
        def gcd(a, b):
            if b == 0:
                return a
            return gcd(b, a % b)
        
        if str1 + str2 != str2 + str1:
            return ""
        
        gcd_length = gcd(len(str1), len(str2))
        
        return str1[:gcd_length]