/* 236. Lowest Common Ancestor of a Binary Tree
Difficulty: Medium
Submission Link: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/submissions/1388953679/ */

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    if (root == NULL || root == p || root == q) {
        return root;
    }

    struct TreeNode *left = lowestCommonAncestor(root->left, p, q);

    struct TreeNode *right = lowestCommonAncestor(root->right, p, q);

    if (left == NULL) {
        return right;
    }
    else if (right == NULL) {
        return left;
    }
    else {
        return root;
    }
}