""" 2542. Maximum Subsequence Score
Difficulty: Hard
Submission Link: https://leetcode.com/problems/maximum-subsequence-score/submissions/1390174398/ """
class Solution:
    def maxScore(self, nums: List[int], muls: List[int], k: int) -> int:
        total_score = max_score = 0
        heap = []

        for mul, num in sorted(zip(muls, nums), reverse=True):
            heappush(heap, num)

            total_score += num

            if len(heap) > k:
                total_score -= heappop(heap)
            if len(heap) == k:
                max_score = max(max_score, total_score * mul)

        return max_score