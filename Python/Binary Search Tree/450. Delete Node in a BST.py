""" 450. Delete Node in a BST
Difficulty: Medium
Submission Link: https://leetcode.com/problems/delete-node-in-a-bst/submissions/1384564022/ """

class Solution(object):
    def deleteNode(self, root, key):
        if root:
            if key < root.val:
                root.left = self.deleteNode(root.left, key)
            elif key > root.val:
                root.right = self.deleteNode(root.right, key)
            else:
                if not root and not root.right:
                    return None
                if not root.left or not root.right:
                    return root.left if root.left is not None else root.right
                temp = root.left
                while temp.right:
                    temp = temp.right
                root.val = temp.val
                root.left = self.deleteNode(root.left, temp.val)
        return root