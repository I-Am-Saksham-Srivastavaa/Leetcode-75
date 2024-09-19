""" 1657. Determine if Two Strings Are Close
Difficulty: Medium
Submission Link: https://leetcode.com/problems/determine-if-two-strings-are-close/submissions/1146084909/ """

class Solution(object):
    def closeStrings(self, word1, word2):
        l1, l2 = len(word1), len(word2)

        if l1 != l2:
            return False

        if word1 == word2:
            return True

        first_set = [0] * 26
        for ch in word1:
            first_set[ord(ch) - ord('a')] += 1

        second_set = [0] * 26
        for ch in word2:
            if first_set[ord(ch) - ord('a')] == 0:
                return False
            second_set[ord(ch) - ord('a')] += 1

        first_set.sort()
        second_set.sort()

        for i in range(26):
            if first_set[i] != second_set[i]:
                return False

        return True