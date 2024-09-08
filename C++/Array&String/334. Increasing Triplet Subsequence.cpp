/* 334. Increasing Triplet Subsequence
Difficulty: Medium
https://leetcode.com/problems/increasing-triplet-subsequence/submissions/1030278765/
 */

class Solution {
public:
   bool increasingTriplet(vector<int>& nums) {
    int c1 = INT_MAX, c2 = INT_MAX;
    for (int x : nums) {
        if (x <= c1) {
            c1 = x;
        } else if (x <= c2) {
            c2 = x;
        } else {
            return true;
        }
    }
    return false;
}
};