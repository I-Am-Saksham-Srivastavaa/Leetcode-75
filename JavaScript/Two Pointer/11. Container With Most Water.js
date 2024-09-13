/* 11. Container With Most Water
Difficulty: Medium
Submission Link: https://leetcode.com/problems/container-with-most-water/submissions/1247602250/ */

var maxArea = function(height) {
    let left = 0;
    let right = height.length - 1;
    let maxWater = 0;
    while (left < right) {
        let width = right - left;
        let h = Math.min(height[left], height[right]);
        let water = width * h;
        maxWater = Math.max(maxWater, water);
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }
    return maxWater;
};