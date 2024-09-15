/* 1448. Count Good Nodes in Binary Tree
Difficulty: Medium
Submiission Link: https://leetcode.com/problems/count-good-nodes-in-binary-tree/submissions/1388925664/ */

public class Solution {
    public int goodNodes = 0;
    public int GoodNodes(TreeNode root) {
        if(root==null){
            return 0;
        }
        if(root.left ==null && root.right == null){
            return 1;
        }
        GetGoodNodeCount(root,root.val);
        return goodNodes;
    }

    public void GetGoodNodeCount(TreeNode root,int currentMax){
        if(root==null){
            return;
        }
        if(root.val>=currentMax){
            currentMax = root.val;
            goodNodes++;
        }

        GetGoodNodeCount(root.left,currentMax);
        GetGoodNodeCount(root.right,currentMax);
    }
}