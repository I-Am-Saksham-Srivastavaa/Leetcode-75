""" 1143. Longest Common Subsequence
Difficulty: Medium
Submission Link: https://leetcode.com/problems/longest-common-subsequence/submissions/1157635954/ """

class Solution:
	def longestCommonSubsequence(self, text1: str, text2: str) -> int:

		length1 = len(text1)
		length2 = len(text2)

		dp = [[0 for _ in range(length2 + 1)] for _ in range(length1 + 1)]

		for i in range(length1 + 1):
			for j in range(length2 + 1):

				if i == 0 or j == 0:
					dp[i][j] = 0

				elif text1[i - 1] == text2[j - 1]:
					dp[i][j] = dp[i - 1][j - 1] + 1

				else:
					dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])

		return dp[length1][length2]
		