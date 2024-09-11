/* 452. Minimum Number of Arrows to Burst Balloons
Difficulty: Medium
Submission Link: https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/submissions/1383581787/ */

public class Solution {
    public int FindMinArrowShots(int[][] points) {
        Array.Sort(points, (a, b) => a[1].CompareTo(b[1]));

        int arrows = 1;
        int prevEnd = points[0][1];
        for (int i = 1; i < points.Length; ++i) {
            if (points[i][0] > prevEnd) {
                arrows++;
                prevEnd = points[i][1];
            }
        }

        return arrows;
    }
}