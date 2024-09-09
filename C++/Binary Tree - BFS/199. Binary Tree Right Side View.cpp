/* 199. Binary Tree Right Side View
Difficulty: Medium
Submission Link: https://leetcode.com/problems/binary-tree-right-side-view/submissions/1381336350/ */

class Solution {
private:
    vector<int> rightNodes;
    int maxHeight = -1;

public:
    void recursive(TreeNode* root, int height) {
        if (root == nullptr)
            return;
        if (height > maxHeight) {
            maxHeight = height;
            rightNodes.push_back(root->val);
        }
        recursive(root->right, height + 1);
        recursive(root->left, height + 1);
    }
    vector<int> rightSideView(TreeNode* root) {
        recursive(root, 0);
        return rightNodes;
    }
};