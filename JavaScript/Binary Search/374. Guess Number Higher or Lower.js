/* 374. Guess Number Higher or Lower
Difficulty: Me
Submission Link: https://leetcode.com/problems/guess-number-higher-or-lower/submissions/1376857960/ */

var guessNumber = function (n) {
    let right = n
    let left = 0
    while (left <= right) {
        let mid = Math.floor((right + left) / 2)

        const result = guess(mid)
        if (result > 0) {
            left = mid + 1
        } else if (result < 0) {
            right = mid
        } else {
            return mid
        }
    }

    return -1
};