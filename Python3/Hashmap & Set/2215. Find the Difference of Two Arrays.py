""" 2215. Find the Difference of Two Arrays
Difficulty: Easy
 https://leetcode.com/problems/find-the-difference-of-two-arrays/submissions/1385744337/ """

class Solution:
    def findDifference(self, nums1: list[int], nums2: list[int]) -> list[list[int]]:
        s1 , s2 = set(nums1) , set(nums2)
        ans =[[],[]]
        for i in s1:
            if i not in s2:
                ans[0].append(i)
        for i in s2:
            if i not in s1:
                ans[1].append(i)
        return ans
        