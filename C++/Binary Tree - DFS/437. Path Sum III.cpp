/* 437. Path Sum III 
Difficulty: Easy
Submission Link: https://leetcode.com/problems/path-sum-iii/submissions/1388938215/ */

class Solution {
public:
    long int ans = 0;
    long int pathSum(TreeNode* root, long int sum) {
        if (root) {
            dfs(root, sum);
            pathSum(root->left, sum);
            pathSum(root->right, sum);
        }
        return ans;
    }
    void dfs(TreeNode* root, long int sum) {
        if (!root)
            return;
        if (root->val == sum)
            ans++;
        dfs(root->left, sum - root->val);
        dfs(root->right, sum - root->val);
    }
};