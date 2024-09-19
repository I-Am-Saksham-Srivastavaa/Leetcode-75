/* 1657. Determine if Two Strings Are Close
Difficulty: Medium
Submission Link: https://leetcode.com/problems/determine-if-two-strings-are-close/submissions/1146084467/ */

public class Solution {
    public bool CloseStrings(string word1, string word2) {
        int l1 = word1.Length, l2 = word2.Length;
        if (l1 != l2) return false;
        if (word1.Equals(word2)) return true;

        int[] firstSet = new int[26];
        int[] secondSet = new int[26];
        
        for (int i = 0; i < l1; i++) {
            firstSet[word1[i] - 'a']++;
        }
        
        for (int i = 0; i < l2; i++) {
            if (firstSet[word2[i] - 'a'] == 0) return false;
            secondSet[word2[i] - 'a']++;
        }
        
        Array.Sort(firstSet);
        Array.Sort(secondSet);

        for (int i = 25; i >= 0 && firstSet[i] != 0; i--) {
            if (firstSet[i] != secondSet[i]) {
                return false;
            }
        }
        
        return true;
    }
}