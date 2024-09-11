""" 215. Kth Largest Element in an Array 
Difficulty: Medium
Submission Link: https://leetcode.com/problems/kth-largest-element-in-an-array/submissions/1382360920/ """

class Solution:
    def findKthLargest(self, nums, k):
        return sorted(nums, reverse=True)[k-1]