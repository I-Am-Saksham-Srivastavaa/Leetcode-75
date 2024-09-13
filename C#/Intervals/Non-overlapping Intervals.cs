/*  Non-overlapping Intervals
Difficulty: Medium
Submission Link: https://leetcode.com/problems/non-overlapping-intervals/submissions/1387449883/ */

public class Solution {
    public int EraseOverlapIntervals(int[][] intervals) {
        if (intervals.Length <= 1)
        return 0;
    
        Array.Sort(intervals, (a, b) => a[1].CompareTo(b[1]));
        
        int count = 0;
        int end = intervals[0][1];
        
        for (int i = 1; i < intervals.Length; i++) {
            if (intervals[i][0] < end) {
                count++;
            } else {
                end = intervals[i][1];
            }
        }
        
        return count;
    }
}