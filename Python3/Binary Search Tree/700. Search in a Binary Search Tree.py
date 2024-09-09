""" 700. Search in a Binary Search Tree
Difficulty: Easy
Submission Link: https://leetcode.com/problems/search-in-a-binary-search-tree/submissions/1381341797/ """

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def searchBST(self, root: TreeNode, val: int) -> TreeNode:
        current = root
        while current:
            if val == current.val:
                return current
            elif val < current.val:
                current = current.left
            else:
                current = current.right
        return None