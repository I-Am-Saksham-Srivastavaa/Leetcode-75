/* 199. Binary Tree Right Side View
Difficulty: Medium
Submission Link: https://leetcode.com/problems/binary-tree-right-side-view/submissions/1381336645/ */

public class Solution {
    public IList<int> RightSideView(TreeNode root) {
        List<int> level = new List<int>();
        if(root == null)
            return level;

        Queue<TreeNode> q = new Queue<TreeNode>();
        q.Enqueue(root);
        while (q.Count() != 0){
            int right = 0;
            int n = q.Count();
            for (var i = 0; i < n; i++){
                TreeNode node = q.Dequeue();
                right = node.val;
                if (node.left != null)
                    q.Enqueue(node.left);
                if (node.right != null)
                    q.Enqueue(node.right);
            }
            level.Add(right);
        }
        return level;
    }
}