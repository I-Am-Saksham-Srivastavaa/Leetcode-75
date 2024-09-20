/* 1493. Longest Subarray of 1's After Deleting One Element 
Difficulty: Medium
Submission Link: https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/submissions/1391221776/ */

public class Solution {
    public int LongestSubarray(int[] nums) {
        int prevWindow = 0;
        int currWindow = 0;
        int max_length = 0;
        
        for (int i = 0; i < nums.Length; i++) {
            if (nums[i] == 0) {
                max_length = Math.Max(max_length, prevWindow + currWindow);
                prevWindow = currWindow;
                currWindow = 0;
            } else {
                currWindow++;
            }
        }

        if (currWindow == nums.Length) {
            return currWindow - 1;
        }

        max_length = Math.Max(max_length, prevWindow + currWindow);
        return max_length;
    }
}