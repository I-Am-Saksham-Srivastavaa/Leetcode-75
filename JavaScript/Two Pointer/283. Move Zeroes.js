/* 283. Move Zeroes
Difficulty: Easy
Submission Link: https://leetcode.com/problems/move-zeroes/submissions/1246678152/ */

var moveZeroes = function(nums) {
    let left = 0;

    for (let right = 0; right < nums.length; right++) {
        if (nums[right] !== 0) {
            [nums[right], nums[left]] = [nums[left], nums[right]];
            left++;
        }
    }

    return nums;    
};