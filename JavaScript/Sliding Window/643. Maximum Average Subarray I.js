/* Maximum Average Subarray I
Difficulty: Easy
Submission Link: https://leetcode.com/problems/maximum-average-subarray-i/submissions/1379177598/ */

const findMaxAverage = function (x, k) {
    let sum = x.slice(0, k).reduce((acc, cur) => acc + cur, 0);
    let avg,
        ans = -Infinity;
    for (let l = 0, r = l + k - 1; l <= x.length - k; l++) {
        avg = (sum / k).toFixed(5);
        sum -= x[l];
        r++;
        sum += x[r];
        ans = Math.max(ans, avg);
    }

    return ans;
};