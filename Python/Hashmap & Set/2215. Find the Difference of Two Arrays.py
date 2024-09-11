""" 2215. Find the Difference of Two Arrays
Difficulty: Easy
 https://leetcode.com/problems/find-the-difference-of-two-arrays/submissions/1385744538/ """

class Solution(object):
    def findDifference(self, nums1, nums2):
        a = set(nums1)
        b=  set(nums2)

        c = a-b
        d = b-a

        return [list(c), list(d)]
        