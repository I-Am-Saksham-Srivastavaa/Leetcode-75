""" 872. Leaf-Similar Trees
Difficulty: Easy
Submission Link: https://leetcode.com/problems/leaf-similar-trees/submissions/1141614160/ """

class Solution(object):
    def leafSimilar(self, root1, root2):
        def inorder(root, v):
            if root:
                inorder(root.left, v)
                if not root.left and not root.right:
                    v.append(root.val)
                inorder(root.right, v)
        
        v1, v2 = [], []
        inorder(root1, v1)
        inorder(root2, v2)
        return v1 == v2