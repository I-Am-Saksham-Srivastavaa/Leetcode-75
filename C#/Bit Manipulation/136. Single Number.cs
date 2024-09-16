/* 136. Single Number
Difficulty: Easy
Submission Link: https://leetcode.com/problems/single-number/submissions/1386409966/ */

public class Solution {
    public int SingleNumber(int[] nums) {
        int ans = 0;
        foreach(int x in nums)
            ans ^= x;
        return ans;
    }
}