/* 1004. Max Consecutive Ones III 
Difficulty: Medium
Submission Link: https://leetcode.com/problems/max-consecutive-ones-iii/submissions/1391227724/ */

public class Solution {
    public int LongestOnes(int[] nums, int k) {
        int zero_cnt = 0, l = 0, ans = 0;
        for (int r = 0; r < nums.Length; ++r) {
            if (nums[r] == 0)
                zero_cnt++;
            while (zero_cnt > k)
                if (nums[l++] == 0)
                    zero_cnt--;
            ans = Math.Max(ans, r - l + 1);
        }
        return ans;
    }
}