/* 1143. Longest Common Subsequence
Difficulty: Medium
Submission Link: https://leetcode.com/problems/longest-common-subsequence/submissions/1157635549/ */

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        
        int n = text1.size();
        int m = text2.size();
        
        if(n == 0 || m == 0)
            return 0;
        
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(text1[i-1] == text2[j-1])
                    dp[i][j] = dp[i-1][j-1]+1;
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
        return dp[n][m];
    }
};