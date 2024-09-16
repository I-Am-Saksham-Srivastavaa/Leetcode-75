/* 198. House Robber
Difficulty: Medium
Submission Link: https://leetcode.com/problems/house-robber/submissions/1153674750/
*/

/**
 * @param {number[]} nums
 * @return {number}
 */
var rob = function(nums) {
    let currMax = 0
    let prevMax = 0

    for(let i = 0; i < nums.length; i++){
        let temp = currMax

        currMax = Math.max(prevMax + nums[i], currMax)

        prevMax = temp
    }
    return currMax
};