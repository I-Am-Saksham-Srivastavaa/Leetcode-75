""" 374. Guess Number Higher or Lower
Difficulty: Me
Submission Link: https://leetcode.com/problems/guess-number-higher-or-lower/submissions/1376858203/ """

class Solution:
    def guessNumber(self, n: int) -> int:
        left, right = 1, n
        while left <= right:
            mid = (left + right) // 2
            result = guess(mid)  # type: ignore

            if result == 0:
                return mid
            elif result > 0:
                left = mid + 1
            else:
                right = mid - 1

        return -1