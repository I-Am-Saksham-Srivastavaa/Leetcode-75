/* 2390. Removing Stars From a String
Difficulty: Easy
Submission Link: https://leetcode.com/problems/removing-stars-from-a-string/submissions/1375560717/ */

var removeStars = function(s) {
    const stack = [];
    for (const c of s) {
        if (c === '*' && stack.length) {
            stack.pop();
        }
        else {
            stack.push(c);
        }
    }
    return stack.join('');
};