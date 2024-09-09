/* 700. Search in a Binary Search Tree
Difficulty: Easy
Submission Link: https://leetcode.com/problems/search-in-a-binary-search-tree/submissions/1381342303/ */

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* current = root;
        while (current != nullptr) {
            if (val == current->val) {
                return current;
            } else if (val < current->val) {
                current = current->left;
            } else {
                current = current->right;
            }
        }
        return nullptr;
    }
};