/* 1372. Longest ZigZag Path in a Binary Tree
Difficulty: Medium
Submission Link: https://leetcode.com/problems/longest-zigzag-path-in-a-binary-tree/submissions/1388943045/ */

public class Solution {
    public int LongestZigZag(TreeNode root) {
        return Math.Max(DFS(root.left, true, 0), DFS(root.right, false, 0));
    }

    int DFS(TreeNode node, bool isLeft, int count) {
        if (node == null) {
            return count;
        }

        if (isLeft) {
            return Math.Max(DFS(node.left, true, 0), DFS(node.right, false, count+1));
        }
        return Math.Max(DFS(node.left, true, count+1), DFS(node.right, false, 0));
    }
}