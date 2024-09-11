/* 215. Kth Largest Element in an Array 
Difficulty: Medium
Submission Link: https://leetcode.com/problems/kth-largest-element-in-an-array/submissions/1382360669/ */

var findKthLargest = function(nums, k) {
    nums.sort((a, b) => b - a);
    return nums[k-1];
};