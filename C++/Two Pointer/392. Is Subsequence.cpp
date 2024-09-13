/* 392. Is Subsequence
Difficulty: Medium
Submission Link: https://leetcode.com/problems/is-subsequence/submissions/1246683848/ */

class Solution {
public:
    bool isSubsequence(std::string s, std::string t) {
        int i = 0, j = 0;
        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }
        return i == s.size();
    }
};