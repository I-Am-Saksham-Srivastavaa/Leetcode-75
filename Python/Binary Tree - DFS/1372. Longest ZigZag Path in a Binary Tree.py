""" 1372. Longest ZigZag Path in a Binary Tree
Difficulty: Medium
Submission Link: https://leetcode.com/problems/longest-zigzag-path-in-a-binary-tree/submissions/1388941787/ """

class Solution(object):
    def longestZigZag(self, root):
        ans = 0
        stack = [(root, 0, None)]
        while stack:
            node, n, left = stack.pop()
            if node:
                ans = max(ans, n)
                stack.append((node.left, 1 if left else n + 1, 1))
                stack.append((node.right, n + 1 if left else 1, 0))
        return ans