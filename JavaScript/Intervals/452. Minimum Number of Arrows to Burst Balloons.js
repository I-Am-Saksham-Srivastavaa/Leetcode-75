/* 452. Minimum Number of Arrows to Burst Balloons
Difficulty: Medium
Submission Link: https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/submissions/1383579975/ */

function findMinArrowShots(points) {
    points.sort((a, b) => a[1] - b[1]);

    let arrows = 1;
    let prevEnd = points[0][1];

    for (let i = 1; i < points.length; ++i) {
        if (points[i][0] > prevEnd) {
            arrows++;
            prevEnd = points[i][1];
        }
    }

    return arrows;
}