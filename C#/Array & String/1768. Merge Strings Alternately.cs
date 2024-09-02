//  1768. Merge Strings Alternately
//  Difficulty: Easy
// Submission Link: https://leetcode.com/problems/merge-strings-alternately/submissions/

public class Solution {
    public string MergeAlternately(string word1, string word2) {
        int len1 = word1.Length;
        int len2 = word2.Length;
        
        char[] merged = new char[len1 + len2];
        int i = 0, j = 0, k = 0;
        
        while (i < len1 && j < len2) {
            merged[k++] = word1[i++];
            merged[k++] = word2[j++];
        }
        
        while (i < len1) {
            merged[k++] = word1[i++];
        }
        
        while (j < len2) {
            merged[k++] = word2[j++];
        }
        
        return new string(merged);
    }
}
