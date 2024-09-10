/* 1137. N-th Tribonacci Number
Difficulty: Easy
Submission Link: https://leetcode.com/problems/n-th-tribonacci-number/submissions/1377975550/*/

var tribonacci = function (n) {
    if (n === 0) return 0;
    if (n === 1 || n === 2) return 1;
    let t0 = 0, t1 = 1, t2 = 1;
    for (let i = 3; i <= n; i++) {
        let t3 = t0 + t1 + t2;
        t0 = t1;
        t1 = t2;
        t2 = t3;
    }
    return t2;
};