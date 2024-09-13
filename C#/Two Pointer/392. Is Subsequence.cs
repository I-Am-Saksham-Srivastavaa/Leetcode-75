/* 392. Is Subsequence
Difficulty: Medium
Submission Link: https://leetcode.com/problems/is-subsequence/submissions/1246683976/ */

public class Solution {
    public bool IsSubsequence(string s, string t) {
        int i = 0, j = 0;
        while (i < s.Length && j < t.Length) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }
        return i == s.Length;
    }
}