/* 1372. Longest ZigZag Path in a Binary Tree
Difficulty: Medium
Submission Link: https://leetcode.com/problems/longest-zigzag-path-in-a-binary-tree/submissions/1388942924/ */

class Solution {
public:
    void sol(TreeNode* root,int l,int r,int& ans){
        if(root==NULL)return;
        ans=max(ans,max(l,r));
        sol(root->left,0,l+1,ans);
        sol(root->right,r+1,0,ans);
    }
    int longestZigZag(TreeNode* root) {
        int l=0,r=0,ans=0;
        sol(root,l,r,ans);
        return ans;
    }
};