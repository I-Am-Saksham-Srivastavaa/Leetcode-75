/* 700. Search in a Binary Search Tree
Difficulty: Easy
Submission Link: https://leetcode.com/problems/search-in-a-binary-search-tree/submissions/1381343027/ */

struct TreeNode* searchBST(struct TreeNode* root, int key) {
    if (root == NULL)
        return NULL;
    if (root->val > key)
        return searchBST(root->left, key);
    else if (root->val < key)
        return searchBST(root->right, key);
    else
        return root;
}