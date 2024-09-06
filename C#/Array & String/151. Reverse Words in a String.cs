/* 151. Reverse Words in a String
Difficulty: Medium
Submission Link: https://leetcode.com/problems/reverse-words-in-a-string/submissions/1017561451/ */

public class Solution {
    public string ReverseWords(string s) {
        string[] words = s.Trim().Split(' ', StringSplitOptions.RemoveEmptyEntries);
        Array.Reverse(words);
        return string.Join(" ", words);
    }
}