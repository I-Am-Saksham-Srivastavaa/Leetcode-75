""" 394. Decode String
Difficulty: Medium
Submission Link: https://leetcode.com/problems/decode-string/submissions/1375591216/ """

class Solution(object):
    def decodeString(self, s):
        stack = []
        current_string = ""
        k = 0

        for char in s:
            if char.isdigit():
                k = k * 10 + int(char)
            elif char == '[':
                stack.append((current_string, k))
                current_string, k = "", 0
            elif char == ']':
                last_string, repeat_times = stack.pop()
                current_string = last_string + current_string * repeat_times
            else:
                current_string += char
        return current_string