""" 700. Search in a Binary Search Tree
Difficulty: Easy
Submission Link: https://leetcode.com/problems/search-in-a-binary-search-tree/submissions/1381342036/ """

class Solution(object):
    def searchBST(self, root, val):
        cur = root
        if cur is None:
            return None
        if val == cur.val:
            return cur
        if val > cur.val:
            return self.searchBST(cur.right, val)
        else:
            return self.searchBST(cur.left, val)