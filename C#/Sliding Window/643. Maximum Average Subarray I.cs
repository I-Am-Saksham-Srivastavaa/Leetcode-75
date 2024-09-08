/* 643. Maximum Average Subarray I
Difficulty: Easy
Submission Link: https://leetcode.com/problems/maximum-average-subarray-i/submissions/1379178195/
 */

public class Solution {
    public double FindMaxAverage(int[] nums, int k) {
        
        double average = 0;

        for(int i = 0; i < k; i++){
            average += nums[i];
        }

        double maxAverage = average/k;

        for(int i = k; i < nums.Length; i++) {
            average += nums[i] - nums[i-k];
            maxAverage = Math.Max(maxAverage, average/k);
        }

        return maxAverage;
    }
}