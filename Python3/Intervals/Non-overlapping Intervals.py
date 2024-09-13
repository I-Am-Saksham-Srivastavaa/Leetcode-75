"""  Non-overlapping Intervals
Difficulty: Medium
Submission Link: https://leetcode.com/problems/non-overlapping-intervals/submissions/1387449556/ """

class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        intervals.sort(key=lambda interval: interval[1])
        end = intervals[0][1]
        count = len(intervals) - 1
        for i in range(1, len(intervals)):
            if intervals[i][0] >= end:
                end = intervals[i][1]
                count -= 1
        return count