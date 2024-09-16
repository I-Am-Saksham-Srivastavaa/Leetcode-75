/* 136. Single Number
Difficulty: Easy
Submission Link: https://leetcode.com/problems/single-number/submissions/1386409560/
 */

var singleNumber = function(nums) {
    let result = 0;
    for (let num of nums) {
        result ^= num;
    }
    return result;
};