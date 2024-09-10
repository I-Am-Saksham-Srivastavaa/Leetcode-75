/* 338. Counting Bits
Difficulty: Medium
Submiission Link: https://leetcode.com/problems/counting-bits/submissions/1037892818/ */

class Solution {
public:
    std::vector<int> countBits(int n) {
        std::vector<int> result(n+1);
        for (int i = 0; i <= n; i++) {
            result[i] = __builtin_popcount(i);
        }
        return result;
    }
};