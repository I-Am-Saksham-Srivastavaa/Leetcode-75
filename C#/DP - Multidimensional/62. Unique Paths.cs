/* 62. Unique Paths
Difficulty: Medium
Submission Link: https://leetcode.com/problems/unique-paths/submissions/1041429158/ */

public class Solution {
    public int UniquePaths(int m, int n) {
        long ans = 1;
        for (int i = 1; i <= m - 1; i++) {
            ans = ans * (n - 1 + i) / i;
        }
        return (int)ans;
    }
}