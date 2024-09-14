/* 1161. Maximum Level Sum of a Binary Tree 
Difficulty: Medium
Submission Link: https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/submissions/1385725371/ */

class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        vector<int> sums;
        traverse(root, 0, sums);
        return max_element(sums.begin(), sums.end()) - sums.begin() + 1;
    }
    
private:
    void traverse(TreeNode* node, int depth, vector<int>& sums) {
        if (!node) return;
        
        if (sums.size() == depth) {
            sums.push_back(0);
        }
        
        sums[depth] += node->val;
        
        traverse(node->left, depth + 1, sums);
        traverse(node->right, depth + 1, sums);
    }
};