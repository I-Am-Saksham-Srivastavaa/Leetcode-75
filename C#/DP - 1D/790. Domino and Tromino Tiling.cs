/* 790. Domino and Tromino Tiling
Difficulty: Medium
Submission Link: https://leetcode.com/problems/domino-and-tromino-tiling/submissions/1378018111/ */

public class Solution
{
    public int NumTilings(int n)
    {
        if (n < 2)
            return n;

        const int mod = 1_000_000_007;
        var d = new long[n + 1, 4];
        d[0, 0] = 1;

        for (var i = 0; i < n; i++)
        {
            d[i + 1, 0] = (d[i, 0] + d[i, 3]) % mod;
            d[i + 1, 3] = (d[i, 0] + d[i, 1] + d[i, 2]) % mod;
            d[i + 1, 1] = (d[i, 0] + d[i, 2]) % mod;
            d[i + 1, 2] = (d[i, 0] + d[i, 1]) % mod;
        }

        return (int) d[n, 0];
    }
}