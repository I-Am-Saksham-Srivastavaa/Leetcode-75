/* 199. Binary Tree Right Side View
Difficulty: Medium
Submission Link: https://leetcode.com/problems/binary-tree-right-side-view/submissions/1381336845/ */

void input(struct TreeNode* root, int* returnSize, int* ans, int now) {
    if (root == NULL) {
        return;
    }
    if (now > *returnSize) {
        ans[*returnSize] = root->val;
        *returnSize += 1;
    }
    input(root->right, returnSize, ans, now + 1);
    input(root->left, returnSize, ans, now + 1);
}

int* rightSideView(struct TreeNode* root, int* returnSize) {
    if (root == NULL) {
        *returnSize = 0;
        return NULL;
    }
    int* ans = malloc(sizeof(int) * 100);
    *returnSize = 0;
    input(root, returnSize, ans, 1);
    return ans;
}