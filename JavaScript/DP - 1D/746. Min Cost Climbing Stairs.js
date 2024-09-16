/* 746. Min Cost Climbing Stairs
Difficulty: Easy
Submission Link: https://leetcode.com/problems/min-cost-climbing-stairs/submissions/1377985075/
*/

var minCostClimbingStairs = function(cost) {
    const n = cost.length;
    const dp = new Array(n + 1).fill(0);

    for (let i = 2; i <= n; i++) {
        dp[i] = Math.min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
    }

    return dp[n];
};