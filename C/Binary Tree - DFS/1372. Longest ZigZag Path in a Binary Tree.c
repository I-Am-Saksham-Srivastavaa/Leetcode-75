/* 1372. Longest ZigZag Path in a Binary Tree
Difficulty: Medium
Submission Link: https://leetcode.com/problems/longest-zigzag-path-in-a-binary-tree/submissions/1388943229/ */

#define LEFT -1
#define RIGHT 1
void DFS(struct TreeNode* root, int side, int cnt, int* ans){
    if(!root) return;
    if(cnt > *ans)
        *ans = cnt;
    DFS(root->left, LEFT, side == LEFT? 1 : cnt + 1, ans);
    DFS(root->right, RIGHT, side == RIGHT? 1 : cnt + 1, ans);
}

int longestZigZag(struct TreeNode* root){
    if(!root) return 0;
    int ans = 0;
    DFS(root, 0, 0, &ans);
    return ans;
}