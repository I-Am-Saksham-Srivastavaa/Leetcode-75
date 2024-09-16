/* 746. Min Cost Climbing Stairs
Difficulty: Easy
Submission Link: https://leetcode.com/problems/min-cost-climbing-stairs/submissions/1377986432/
 */

 public class Solution {
    public int MinCostClimbingStairs(int[] cost) {
        int n = cost.Length;
        int[] dp = new int[n + 1];
        
        for (int i = 2; i <= n; i++) {
            dp[i] = Math.Min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
        }
        
        return dp[n];
    }
}