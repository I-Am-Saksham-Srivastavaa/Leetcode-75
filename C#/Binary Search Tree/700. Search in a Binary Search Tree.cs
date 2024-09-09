/* 700. Search in a Binary Search Tree
Difficulty: Easy
Submission Link: https://leetcode.com/problems/search-in-a-binary-search-tree/submissions/1381342452/ */

public class Solution {
    public TreeNode SearchBST(TreeNode root, int key) {
      if (root == null)
            return null;
        if (root.val > key)
            return SearchBST(root.left, key);
        else if (root.val < key)
            return SearchBST(root.right, key);
        else
            return root;  
    }
}