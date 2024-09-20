/* 2130. Maximum Twin Sum of a Linked List
Difficulty: Medium
Submission Link: https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/submissions/1387473300/ */

var maxVowels = function (s, k) {

    let target = ['a', 'e', 'i', 'o', 'u'];
    let substr = [];
    let n = 0;
    let result = 0;
    for (let i = 0; i < k; i++) {
        if (target.includes(s[i])) {
            substr.push(true)
            n++
        } else {
            substr.push(false)
        }
    }
    result = n;
    for (let i = k; i < s.length; i++) {
        let first = substr.shift();
        substr.push(target.includes(s[i]));
        if (first) {
            n--;
        };
        if (target.includes(s[i])) {
            n++;
        };
        result = Math.max(result, n);
    }
    return result;
};