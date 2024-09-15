""" 236. Lowest Common Ancestor of a Binary Tree
Difficulty: Medium
Submission Link: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/submissions/1388949666/ """

class Solution(object):
    def lowestCommonAncestor(self, root, p, q):
        if(root == None or root == p or root == q):
            return root
        l = self.lowestCommonAncestor(root.left,p,q)
        r = self.lowestCommonAncestor(root.right,p,q)
        if(l and r):
            return root
        return l if l else r