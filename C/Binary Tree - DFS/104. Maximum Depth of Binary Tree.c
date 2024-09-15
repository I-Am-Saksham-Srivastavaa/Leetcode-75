/* 104. Maximum Depth of Binary Tree
Difficulty: Easy
Sumbission Link: https://leetcode.com/problems/maximum-depth-of-binary-tree/submissions/1386400262/ */

int maxDepth(struct TreeNode* root){
    if(root == NULL)
        return 0;
    else {
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);
        if(leftDepth > rightDepth)
            return leftDepth + 1;
        else
            return rightDepth + 1;
    }
}