""" 2390. Removing Stars From a String
Difficulty: Easy
Submission Link: https://leetcode.com/problems/removing-stars-from-a-string/submissions/1375560836/ """

class Solution:
    def removeStars(self, s: str) -> str:
        ans=[]
        for i in s:
            if i=='*':
                ans.pop()
            else:
                ans+=[i]
        return "".join(ans)