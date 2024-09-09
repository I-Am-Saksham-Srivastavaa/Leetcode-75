""" 199. Binary Tree Right Side View
Difficulty: Medium
Submission Link: https://leetcode.com/problems/binary-tree-right-side-view/submissions/1381335951/ """

class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> list[int]:
        if not root:
            return []
        q = collections.deque()
        q.append(root)
        res = []
        while q:
            n = len(q)
            last = float("inf")
            for _ in range(n):
                node = q.popleft()
                last = node.val
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)

            res.append(last)
        return res