""" 872. Leaf-Similar Trees
Difficulty: Easy
Submission Link: https://leetcode.com/problems/leaf-similar-trees/submissions/1141614250/ """

class Solution:
    def leafSimilar(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> bool:
        def dfs(root):
            if root is None:
                return []
            leaves = dfs(root.left) + dfs(root.right)
            return leaves or [root.val]
        return dfs(root1) == dfs(root2)
        