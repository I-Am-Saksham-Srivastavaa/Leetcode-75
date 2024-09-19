""" 1657. Determine if Two Strings Are Close
Difficulty: Medium
Submission Link: https://leetcode.com/problems/determine-if-two-strings-are-close/submissions/1146085063/ """

class Solution:
    def closeStrings(self, word1: str, word2: str) -> bool:
        # Step 1: Check if lengths are equal
        if len(word1) != len(word2):
            return False

        # Step 2: Check if strings are already equal
        if word1 == word2:
            return True

        # Step 3: Count occurrences of each character
        first_set = [0] * 26
        second_set = [0] * 26
        
        for ch in word1:
            first_set[ord(ch) - ord('a')] += 1

        for ch in word2:
            if first_set[ord(ch) - ord('a')] == 0:
                return False
            second_set[ord(ch) - ord('a')] += 1

        # Step 4: Check if sets of characters are the same
        if set(first_set) != set(second_set):
            return False

        # Step 5: Sort both arrays
        first_set.sort()
        second_set.sort()

        # Step 6: Compare sorted arrays element by element
        for i in range(26):
            if first_set[i] != second_set[i]:
                return False

        # Step 7: If all conditions are satisfied, return True
        return True