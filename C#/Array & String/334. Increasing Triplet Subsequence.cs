/* 334. Increasing Triplet Subsequence
Difficulty: Medium
https://leetcode.com/problems/increasing-triplet-subsequence/submissions/1030280898/
 */

 public class Solution {
    public bool IncreasingTriplet(int[] nums) {

        if(nums.Length < 3) return false;

        int smallest = int.MaxValue;
        int secondSmallest = int.MaxValue;

        for(int idx = 0; idx < nums.Length; idx++)
        {
            if(nums[idx] <= smallest)
                smallest = nums[idx];
            else if(nums[idx] <= secondSmallest)
                secondSmallest = nums[idx];
            else 
                return true;
        }
        return false;
    }
}