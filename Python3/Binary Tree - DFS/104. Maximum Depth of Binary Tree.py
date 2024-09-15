""" 104. Maximum Depth of Binary Tree
Difficulty: Easy
Sumbission Link: https://leetcode.com/problems/maximum-depth-of-binary-tree/submissions/1386399365/ """

class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if root is None:
            return 0

        leftSubHeight = self.maxDepth(root.left)
        rightSubHeight = self.maxDepth(root.right)

        return max(leftSubHeight, rightSubHeight) + 1