/* 392. Is Subsequence
Difficulty: Medium
Submission Link: https://leetcode.com/problems/is-subsequence/submissions/1246682827/
*/

var isSubsequence = function(s, t) {
    let i = 0, j = 0;
    while (i < s.length && j < t.length) {
        if (s[i] === t[j]) {
            i++;
        }
        j++;
    }
    return i === s.length;
}