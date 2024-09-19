/* 1657. Determine if Two Strings Are Close
Difficulty: Medium
Submission Link: https://leetcode.com/problems/determine-if-two-strings-are-close/submissions/1146084743/ */

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int l1 = word1.length(), l2 = word2.length();
        
        // Step 1: Check if lengths are equal
        if (l1 != l2) {
            return false;
        }
        
        // Step 2: Check if strings are already equal
        if (word1 == word2) {
            return true;
        }
        
        // Step 3: Count occurrences of each character
        vector<int> firstSet(26, 0), secondSet(26, 0);
        
        for (char ch : word1) {
            firstSet[ch - 'a']++;
        }
        
        for (char ch : word2) {
            if (firstSet[ch - 'a'] == 0) {
                return false;
            }
            secondSet[ch - 'a']++;
        }
        
        // Step 4: Check if the set of characters is the same
        for (int i = 0; i < 26; i++) {
            if (firstSet[i] == 0 && secondSet[i] > 0) {
                return false;
            }
            if (secondSet[i] == 0 && firstSet[i] > 0) {
                return false;
            }
        }
        
        // Step 5: Sort arrays
        sort(firstSet.begin(), firstSet.end());
        sort(secondSet.begin(), secondSet.end());
        
        // Step 6: Compare sorted arrays
        for (int i = 0; i < 26; i++) {
            if (firstSet[i] != secondSet[i]) {
                return false;
            }
        }
        
        // Step 7: If all checks pass, return true
        return true;
    }
};