/* 72. Edit Distance
Difficulty: Hard
Submission Link: https://leetcode.com/problems/edit-distance/submissions/1390154747/ */

public class Solution {
    public int MinDistance(string word1, string word2) {
        int m = word1.Length;
        int n = word2.Length;
        int[,] dp = new int[m + 1, n + 1];

        for(int i = 0; i <= m; i++) {
            for(int j = 0; j <= n; j++) {
                if(i == 0) {
                    dp[i, j] = j;
                } else if (j == 0) {
                    dp[i, j] = i;
                } else if (word1[i - 1] == word2[j - 1]) {
                    dp[i, j] = dp[i - 1, j - 1];
                } else {
                    int insert = dp[i, j - 1];
                    int del = dp[i - 1, j];
                    int replace = dp[i - 1, j - 1];
                    dp[i, j] = 1 + Math.Min(insert, Math.Min(del, replace));
                }
            }
        }
        return dp[m, n];
    }
}