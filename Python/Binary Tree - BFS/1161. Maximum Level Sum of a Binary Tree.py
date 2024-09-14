""" 1161. Maximum Level Sum of a Binary Tree 
Difficulty: Medium
Submission Link: https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/submissions/1385725167/ """

class Solution(object):
    sum = float('-inf')
    level = 0
    def maxLevelSum(self, root):
        lis = [root] 
        self.go(lis, 1)
        return self.level

    def go(self, lis, curr):
        if(len(lis)==0): return
        lvl = []
        s = 0
        for node in lis:
            if node.left is not None:
                lvl.append(node.left) 
            if node.right is not None:
                lvl.append(node.right)

            s = s + node.val
        self.go(lvl, (curr + 1))

        if s >= self.sum:
            self.sum = s
            self.level = curr        