/* 450. Delete Node in a BST
Difficulty: Medium
Submission Link: https://leetcode.com/problems/delete-node-in-a-bst/submissions/1384565637/ */

struct TreeNode* replace(struct TreeNode* root) {
    if (root->right == NULL && root->left == NULL)
        return NULL;
    if (root->right == NULL)
        return root->left;
    if (root->left == NULL)
        return root->right;
    struct TreeNode* temp1 = root->right;
    if (temp1->left == NULL) {
        temp1->left = root->left;
    } else {
        struct TreeNode* temp2 = temp1;
        while (temp2->left != NULL) {
            temp2 = temp2->left;
        }
        temp2->left = root->left;
    }
    return temp1;
}
struct TreeNode* deleteNode(struct TreeNode* root, int key) {
    if (root == NULL)
        return NULL;
    if (root->val == key)
        return replace(root);
    if (root->val < key)
        root->right = deleteNode(root->right, key);
    if (root->val > key)
        root->left = deleteNode(root->left, key);
    return root;
}