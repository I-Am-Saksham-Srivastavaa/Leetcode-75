/* 162. Find Peak Element
Difficulty: Medium
Submission Link: https://leetcode.com/problems/find-peak-element/submissions/1016867437/ */

int findPeakElement(int* nums, int numsSize) {
    int left = 0, right = numsSize - 1;
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] > nums[mid + 1]) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    
    return left;
}