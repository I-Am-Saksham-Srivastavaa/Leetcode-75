/* 1493. Longest Subarray of 1's After Deleting One Element 
Difficulty: Medium
Submission Link: https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/submissions/1391222002/ */

int longestSubarray(int* nums, int numsSize) {
    int zeroCount = 0;       
    int longestWindow = 0;  
    int start = 0;          
    
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 0) {
            zeroCount++;     
        }
        
        while (zeroCount > 1) {
            if (nums[start] == 0) {
                zeroCount--; 
            }
            start++;         
        }
        
        if (i - start > longestWindow) {
            longestWindow = i - start;
        }
    }
    
    return longestWindow;
}