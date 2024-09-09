/* 872. Leaf-Similar Trees
Difficulty: Easy
Submission Link: https://leetcode.com/problems/leaf-similar-trees/submissions/1141613351/ */

size_t collectValueSequence(int* seq, struct TreeNode* root) {
    size_t i = 0;
    size_t j = 0;

    struct TreeNode* stack[200];

    stack[i++] = root;

    while (i > 0) {
        struct TreeNode* node = stack[--i];

        if (!node->left && !node->right) {
                seq[j++] = node->val;
        } else {
            if (node->left) {
                stack[i++] = node->left;
            }

            if (node->right) {
                stack[i++] = node->right;
            }
        }
    }

    return j;
}

bool leafSimilar(struct TreeNode* root1, struct TreeNode* root2) {
    const int seq1[200];
    const int seq2[200];

    const size_t size1 = collectValueSequence(seq1, root1);
    const size_t size2 = collectValueSequence(seq2, root2);

    if (size1 != size2) {
        return false;
    }

    for (size_t i = 0; i < size1; i++) {
        if (seq1[i] != seq2[i]) {
            return false;
        }
    }

    return true;
}