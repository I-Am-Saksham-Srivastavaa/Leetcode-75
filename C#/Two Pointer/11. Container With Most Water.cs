/* 11. Container With Most Water
Difficulty: Medium
Submission Link: https://leetcode.com/problems/container-with-most-water/submissions/1247602868/ */

public class Solution {
    public int MaxArea(int[] height) {
        int maxArea = 0;
        int left = 0, right = height.Length - 1;

        while (left < right) {
            int h = Math.Min(height[left], height[right]);
            int width = right - left;
            maxArea = Math.Max(maxArea,h*width);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxArea;        
    }
}