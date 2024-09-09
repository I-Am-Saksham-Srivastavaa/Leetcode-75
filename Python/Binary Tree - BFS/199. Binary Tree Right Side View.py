""" 199. Binary Tree Right Side View
Difficulty: Medium
Submission Link: https://leetcode.com/problems/binary-tree-right-side-view/submissions/1381336134/ """

from collections import deque

class Solution(object):
    def rightSideView(self, root):
        if not root: return []

        res = []
        q = deque([root])
        while q:
            n = len(q)
            for u in range(n):
                node = q.popleft()
                if u == n - 1 and node:
                    res.append(node.val)
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
        
        return res