""" 1448. Count Good Nodes in Binary Tree
Difficulty: Medium
Submiission Link: https://leetcode.com/problems/count-good-nodes-in-binary-tree/submissions/1388925010/
 """

class Solution:
    def goodNodes(self, root: TreeNode) -> int:
        if not root:
            return 0
        
        def dfs(node, curMax):
            if not node:
                return
            if node.val >= curMax:
                count[0] += 1
                curMax = node.val
            dfs(node.left, curMax)
            dfs(node.right, curMax)
        
        count = [0]
        dfs(root, root.val)
        
        return count[0]