/* 1004. Max Consecutive Ones III 
Difficulty: Medium
Submission Link: https://leetcode.com/problems/max-consecutive-ones-iii/submissions/1391227589/ */

class Solution {
public:
    int longestOnes(std::vector<int>& nums, int k) {
        int l = 0, max_num = 0;

        for (int r = 0; r < nums.size(); r++) {
            k -= 1 - nums[r];

            if (k < 0) {
                k += 1 - nums[l];
                l++;
            } else {
                max_num = std::max(max_num, r - l + 1);
            }
        }
        return max_num;
    }
};