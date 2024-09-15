""" 236. Lowest Common Ancestor of a Binary Tree
Difficulty: Medium
Submission Link: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/submissions/1388949511/ """

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        if not root or root == p or root == q:
            return root
        left = self.lowestCommonAncestor(root.left, p, q)
        right = self.lowestCommonAncestor(root.right, p, q)
        
        if left and right:
            return root
        return left if left else right