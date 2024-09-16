/* 198. House Robber
Difficulty: Medium
Submission Link: https://leetcode.com/problems/house-robber/submissions/1153673887/ */


#define MAX(a, b) ((a) > (b) ? (a) : (b))

int rob(int* nums, int numsSize)
{
    int i;
    int *dp = malloc(sizeof(int) * numsSize);
    
    if (numsSize == 0)
        return 0;
    
    for (i = 0; i < numsSize; i++) {
        switch(i) {
            case 0:
                dp[i] = nums[0];
                break;
            case 1:
                dp[i] = MAX(nums[i], dp[i - 1]);
                break;
            default:
                dp[i] = MAX(nums[i] + dp[i - 2], dp[i - 1]);
        }
    }
    
    return dp[numsSize - 1];
}