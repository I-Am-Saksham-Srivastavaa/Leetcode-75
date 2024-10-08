/*  Non-overlapping Intervals
Difficulty: Medium
Submission Link: https://leetcode.com/problems/non-overlapping-intervals/submissions/1387449816/ */

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b) {
            return a[1] < b[1];
        });
        int end = intervals[0][1];
        int count = intervals.size() - 1;
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] >= end) {
                end = intervals[i][1];
                count--;
            }
        }
        return count;
    }
};