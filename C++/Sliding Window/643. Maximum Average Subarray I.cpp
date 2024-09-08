/* Maximum Average Subarray I
Difficulty: Easy
Submission Link: https://leetcode.com/problems/maximum-average-subarray-i/submissions/1379178051/ */

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = accumulate(nums.begin(), nums.begin() + k, 0);
        double ans = -DBL_MAX;

        for (int l = 0, r = l + k - 1; l <= nums.size() - k; l++) {
            double avg = sum / k;
            ans = max(ans, avg);
            sum -= nums[l];
            r++;
            if (r < nums.size()) {
                sum += nums[r];
            }
        }

        return ans;
    }
};