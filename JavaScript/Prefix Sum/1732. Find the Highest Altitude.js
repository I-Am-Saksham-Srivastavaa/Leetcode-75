/* 1732. Find the Highest Altitude
Difficulty: Easy
Submission Link: https://leetcode.com/problems/find-the-highest-altitude/submissions/1379773462/ */

var largestAltitude = function (gain) {
    let sum = 0;
    let alt = [];
    let max;
    for (let i = 0; i <= gain.length; i++) {
        alt.push(sum);
        sum = sum + gain[i];
    }
    max = alt[0];
    for (let j = 0; j < alt.length; j++) {
        if (max < alt[j]) {
            max = alt[j];
        }
    }
    return max;
}