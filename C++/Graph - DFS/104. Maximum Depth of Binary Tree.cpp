 /* 104. Maximum Depth of Binary Tree
Difficulty: Easy
Sumbission Link: https://leetcode.com/problems/maximum-depth-of-binary-tree/submissions/1386400005/ */

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        return 1 + max(maxDepth(root->left),maxDepth(root->right));
    }
};