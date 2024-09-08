/* Maximum Average Subarray I
Difficulty: Easy
Submission Link: https://leetcode.com/problems/maximum-average-subarray-i/submissions/1379178809/ */

double findMaxAverage(int* nums, int numsSize, int k) {
    int x;
    double sum = 0;
    double max_Sum = 0;
    for (x = 0; x < k; ++x) {
        sum += nums[x];
    }

     max_Sum = sum;

    for (x = k; x < numsSize; ++x) {
        sum += nums[x] - nums[x - k];
        max_Sum = (sum > max_Sum) ? sum : max_Sum;
    }

    return max_Sum / k;
}