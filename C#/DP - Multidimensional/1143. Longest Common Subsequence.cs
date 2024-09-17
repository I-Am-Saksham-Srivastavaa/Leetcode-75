/* 1143. Longest Common Subsequence
Difficulty: Medium
Submission Link: https://leetcode.com/problems/longest-common-subsequence/submissions/1157635269/ */

public class Solution {
    public int LongestCommonSubsequence(string text1, string text2) {
        int m = text1.Length;
        int n = text2.Length;

        int[] dp = new int[n + 1];

        for (int i = 1; i <= m; i++) {
            int prev = 0;

            for (int j = 1; j <= n; j++) {
                int temp = dp[j];
                if (text1[i - 1] == text2[j - 1]) {
                    dp[j] = prev + 1;
                } else {
                    dp[j] = Math.Max(dp[j], dp[j - 1]);
                }
                prev = temp;
            }
        }

        return dp[n];
    }
}