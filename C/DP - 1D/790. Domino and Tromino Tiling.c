/* 790. Domino and Tromino Tiling
Difficulty: Medium
Submission Link: https://leetcode.com/problems/domino-and-tromino-tiling/submissions/1378018306/ */

int numTilings(int n)
{
    long long dp1 = 1;
    long long dp2 = 2;
    long long dp3 = 5;
    long long dp_N;

    if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    } else if (n == 3) {
        return 5;
    }
    
    for (n -= 3; n; n--) {
        dp_N = (2 * dp3 + dp1) % (1000000007);
        dp1 = dp2;
        dp2 = dp3;
        dp3 = dp_N;
    }

    return dp_N;
}