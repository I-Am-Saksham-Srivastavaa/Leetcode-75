/* 2390. Removing Stars From a String
Difficulty: Easy
Submission Link: https://leetcode.com/problems/removing-stars-from-a-string/submissions/1375561311/ */

public class Solution {
    public string RemoveStars(string s) {
        char[] result = new char[s.Length];
        int top = 0;

        foreach (char c in s) {
            if (c != '*') {
                result[top++] = c;
            } else {
                top--;
            }
        }
        return new string(result, 0, top);
    }
}