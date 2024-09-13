/* 11. Container With Most Water
Difficulty: Medium
Submission Link: https://leetcode.com/problems/container-with-most-water/submissions/1247603052/
 */

int maxArea(int* height, int heightSize) {
    int left = 0;
    int right = heightSize - 1;
    int maxWater = 0;
    while (left < right) {
        int width = right - left;
        int h = height[left] < height[right] ? height[left] : height[right];
        int water = width * h;
        if (water > maxWater) {
            maxWater = water;
        }if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxWater;
}