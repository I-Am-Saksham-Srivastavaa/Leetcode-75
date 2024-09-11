/* 2215. Find the Difference of Two Arrays
Difficulty: Easy
 https://leetcode.com/problems/find-the-difference-of-two-arrays/submissions/1385743967/ */

var findDifference = function(nums1, nums2) {
    let s1 = new Set(nums1);
    let s2 = new Set(nums2);
    let ans = [[], []];

    for (let i of s1) {
        if (!s2.has(i)) {
            ans[0].push(i);
        }
    }

    for (let i of s2) {
        if (!s1.has(i)) {
            ans[1].push(i);
        }
    }

    return ans;
};