/* 334. Increasing Triplet Subsequence
Difficulty: Medium
Submission Link: https://leetcode.com/problems/increasing-triplet-subsequence/submissions/1030280770/
 */

bool increasingTriplet(int* nums, int numsSize) {
    int min = INT_MAX;
    int mid = INT_MAX;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] <= min) {
            min = nums[i];
        } else if (nums[i] <= mid) {
            mid = nums[i];
        } else {
            return true;
        }
    }

    return false;
}