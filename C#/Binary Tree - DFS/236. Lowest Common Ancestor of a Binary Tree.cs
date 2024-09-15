/* 236. Lowest Common Ancestor of a Binary Tree
Difficulty: Medium
Submission Link: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/submissions/1388953424/ */

public class Solution {
    public TreeNode LowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        if (root == null || root == p || root == q) {
            return root;
        }

        TreeNode left = LowestCommonAncestor(root.left, p, q);
        TreeNode right = LowestCommonAncestor(root.right, p, q);

        return left != null && right != null ? root : left ?? right;
    }
}