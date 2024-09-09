/* 872. Leaf-Similar Trees
Difficulty: Easy
Submission Link: https://leetcode.com/problems/leaf-similar-trees/submissions/1141613812/ */

public class Solution {
    public void Inorder(TreeNode root, List<int> v) {
        if (root != null) {
            Inorder(root.left, v);
            if (root.left == null && root.right == null) {
                v.Add(root.val);
            }
            Inorder(root.right, v);
        }
    }

    public bool LeafSimilar(TreeNode root1, TreeNode root2) {
        List<int> v1 = new List<int>();
        List<int> v2 = new List<int>();
        Inorder(root1, v1);
        Inorder(root2, v2);
        return Enumerable.SequenceEqual(v1, v2);
    }
}