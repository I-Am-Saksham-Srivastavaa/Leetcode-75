/* 1161. Maximum Level Sum of a Binary Tree 
Difficulty: Medium
Submission Link: https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/submissions/1385726317/ */

int find_height(struct TreeNode * root)
{
    if(root)
    {
        int l_height = find_height(root->left);
        int r_height = find_height(root->right);

        return (l_height >= r_height) ? (l_height + 1) : (r_height + 1);
    }
    return 0;
}

void traversal(struct TreeNode * root, int cur_level, int * level_arr_sum)
{
    if(root)
    {
        level_arr_sum[cur_level] += root->val;

        traversal(root->left, cur_level + 1, level_arr_sum);
        traversal(root->right, cur_level + 1, level_arr_sum);
    }
    return;
}

int maxLevelSum(struct TreeNode* root) 
{
    int max_val = INT_MIN;
    int smallest_level = -1;

    int height = find_height(root);

    int * level_arr = (int *)malloc(sizeof(int) * (height + 1)); 
    int i=0;
    for(i=0; i<height+1; i++)
    {
        level_arr[i] = 0;
    }

    traversal(root, 1, level_arr);  
    for(i=1; i<height+1; i++)
    {
        if(level_arr[i] > max_val)
        {
            max_val = level_arr[i];
            smallest_level = i;
        }
    }
    return smallest_level;  
}