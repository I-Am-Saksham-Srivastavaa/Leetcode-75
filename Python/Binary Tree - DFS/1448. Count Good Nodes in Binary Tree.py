""" 1448. Count Good Nodes in Binary Tree
Difficulty: Medium
Submiission Link: https://leetcode.com/problems/count-good-nodes-in-binary-tree/submissions/1388925153/ """

class Solution(object):
    def goodNodes(self, root):
        def tracking_dfs(path_max, node, goods):
            if node is None:
                return
            if node.val >= path_max:
                goods.append(node)
                path_max = node.val
    
            tracking_dfs(path_max, node.left, goods)
            tracking_dfs(path_max, node.right, goods)
            
        nodes = []
        tracking_dfs(root.val, root, nodes)
        return len(nodes)