/* 1679. Max Number of K-Sum Pairs
Difficulty: Medium
Submission Link : https://leetcode.com/problems/max-number-of-k-sum-pairs/submissions/1247608047/ */

public class Solution {
    public int MaxOperations(int[] nums, int k) {
        Dictionary<int, int> numCounts = new Dictionary<int, int>();
        int operationCount = 0;

        foreach (int num in nums)
        {
            if (numCounts.ContainsKey(k - num) && numCounts[k - num] > 0)
            {
                operationCount++;
                numCounts[k - num]--;
            }
            else
            {
                if (!numCounts.ContainsKey(num))
                    numCounts[num] = 0;
                numCounts[num]++;
            }
        }

        return operationCount;
    }
}