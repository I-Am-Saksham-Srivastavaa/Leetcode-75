/* 198. House Robber
Difficulty: Medium
Submission Link: https://leetcode.com/problems/house-robber/submissions/1153674043/ */

public class Solution {
    private int[] houseMoney;
    private Dictionary<int, int> cache;

    public int Rob(int[] nums) {
        houseMoney = nums;
        cache = new Dictionary<int, int>();
        int n = houseMoney.Length;

        if (n == 1)
            return houseMoney[0];

        int maxAmountAtFirstPos = GetMaxAmount(0);
        int maxAmountAtSecondPos = GetMaxAmount(1);

        return Math.Max(maxAmountAtFirstPos, maxAmountAtSecondPos);
    }

    private int GetMaxAmount(int position) {
        if (cache.ContainsKey(position))
            return cache[position];

        int n = houseMoney.Length;

        if (position + 2 >= n)
            return houseMoney[position];

        if (position + 3 >= n) {
            cache[position] = houseMoney[position] + GetMaxAmount(position + 2);
            return cache[position];
        }

        int maxAmountSkippingOne = GetMaxAmount(position + 2);
        int maxAmountSkippingTwo = GetMaxAmount(position + 3);
        cache[position] = houseMoney[position] + Math.Max(maxAmountSkippingOne, maxAmountSkippingTwo);
        return cache[position];
    }
}