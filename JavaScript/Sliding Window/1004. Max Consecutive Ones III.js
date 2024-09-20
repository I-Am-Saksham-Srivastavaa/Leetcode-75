/* 1004. Max Consecutive Ones III 
Difficulty: Medium
Submission Link: https://leetcode.com/problems/max-consecutive-ones-iii/submissions/1391225265/ */

var longestOnes = function (nums, k) {
    let l = max_num = 0

    for (let r = 0; r < nums.length; r++) {
        k -= 1 - nums[r]

        if (k < 0) {
            k += 1 - nums[l]
            l++
        } else {
            max_num = Math.max(max_num, r - l + 1)
        }
        console.log(l, r)
    }

    return max_num
};