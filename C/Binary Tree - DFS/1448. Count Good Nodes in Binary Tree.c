/* 1448. Count Good Nodes in Binary Tree
Difficulty: Medium
Submiission Link: https://leetcode.com/problems/count-good-nodes-in-binary-tree/submissions/1388925772/ */

int goodNodes(struct TreeNode* root){
    if (!root) return 0;
    
    int count = 0;
    void dfs(struct TreeNode* node, int curMax){
        if (!node) return;
        
        if (node->val >= curMax){
            count ++;
            curMax = node->val;
        }
        dfs(node->left, curMax);
        dfs(node->right, curMax);
    }
    
    dfs(root, root->val);
    return count;
}