/* 437. Path Sum III 
Difficulty: Easy
Submission Link: https://leetcode.com/problems/path-sum-iii/submissions/1388938746/ */

typedef long long int LLI;

bool isLeafNode(struct TreeNode* node) {
    return ((node->left == NULL) && (node->right == NULL));
}
int collectPathSum(struct TreeNode* node, LLI* v, int n, LLI targetsum) {
    int match = 0;
    LLI* v2 = (LLI*)calloc(n + 1, sizeof(LLI));
    for (int i = 0; i < n; i++) {
        v2[i] = v[i] + (LLI)node->val;
        if (v2[i] == targetsum)
            match++;
    }
    v2[n] = node->val;
    if (node->val == targetsum)
        match++;
    if (isLeafNode(node)) {
        free(v2);
        return match;
    }
    if (node->left != NULL)
        match += collectPathSum(node->left, v2, n + 1, targetsum);
    if (node->right != NULL)
        match += collectPathSum(node->right, v2, n + 1, targetsum);
    free(v2);
    return match;
}
int pathSum(struct TreeNode* root, int targetSum) {
    if (root == NULL)
        return 0;
    LLI v[1] = {0};
    return collectPathSum(root, v, 0, (LLI)targetSum);
}