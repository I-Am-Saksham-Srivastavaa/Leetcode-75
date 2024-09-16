/* 746. Min Cost Climbing Stairs
Difficulty: Easy
Submission Link: https://leetcode.com/problems/min-cost-climbing-stairs/submissions/1377986565/
 */

int minCostClimbingStairs(int* cost, int costSize) {
    int n = costSize;
    int dp[n + 1];

    dp[0] = 0;
    dp[1] = 0;

    for (int i = 2; i <= n; i++) {
        dp[i] = fmin(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
    }

    return dp[n];
}
