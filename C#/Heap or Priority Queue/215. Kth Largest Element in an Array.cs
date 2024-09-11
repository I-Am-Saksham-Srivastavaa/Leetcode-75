/* 215. Kth Largest Element in an Array 
Difficulty: Medium
Submission Link: https://leetcode.com/problems/kth-largest-element-in-an-array/submissions/1382361243/ */

public class Solution {
    public int FindKthLargest(int[] nums, int k) {
        Array.Sort(nums);
        return nums[nums.Length - k];
    }
}