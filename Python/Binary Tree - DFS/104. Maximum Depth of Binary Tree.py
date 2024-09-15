""" 104. Maximum Depth of Binary Tree
Difficulty: Easy
Sumbission Link: https://leetcode.com/problems/maximum-depth-of-binary-tree/submissions/1386399467/ """

class Solution(object):
    def maxDepth(self, root):
        if root == None:
            return 0
        return max(self.maxDepth(root.left), self.maxDepth(root.right)) + 1