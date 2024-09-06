/* 151. Reverse Words in a String
Difficulty: Medium
Submission Link: https://leetcode.com/problems/reverse-words-in-a-string/submissions/1017555974/ */

var reverseWords = function(s) {
    const words = s.trim().split(/\s+/);
    return words.reverse().join(' ');
};