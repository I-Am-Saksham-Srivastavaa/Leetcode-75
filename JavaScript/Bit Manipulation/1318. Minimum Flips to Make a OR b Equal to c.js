/* 1318. Minimum Flips to Make a OR b Equal to c
Difficulty: Medium
Submission Link: https://leetcode.com/problems/minimum-flips-to-make-a-or-b-equal-to-c/submissions/1388958129/
*/

var minFlips = function(a, b, c) {
    let o = 0;
    for(let i = 0; i < 32; i++) {
        let cbit = (c>>i) & 1;
        let abit = (a>>i) & 1, bbit = (b>>i) & 1;
        let v = abit || bbit;
        if (cbit === v) continue;
        o += cbit == 1 ? 1 : (abit + bbit);
    }
    return o;
};