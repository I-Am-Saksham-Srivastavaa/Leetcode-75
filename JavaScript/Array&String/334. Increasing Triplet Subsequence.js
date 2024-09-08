/* 334. Increasing Triplet Subsequence
Difficulty: Medium
https://leetcode.com/problems/increasing-triplet-subsequence/submissions/
 */

var increasingTriplet = function(nums) {
    let first = Infinity
    let second = Infinity
    for(let third of nums) {
        if(third < first){
            first = third;
        }
        else if(third < second && third > first){
            second = third;
        }
        else if(third > second && third > first) return true;
    }
    return false;
};