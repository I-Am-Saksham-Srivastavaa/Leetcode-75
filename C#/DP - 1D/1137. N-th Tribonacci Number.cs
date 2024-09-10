/* 1137. N-th Tribonacci Number
Difficulty: Easy
Submission Link: https://leetcode.com/problems/n-th-tribonacci-number/submissions/1377976175/ */

public class Solution {
    public int Tribonacci(int n) {
        if (n == 0) return 0;
        if (n == 1 || n == 2) return 1;
        
        int t0 = 0, t1 = 1, t2 = 1;
        
        for (int i = 3; i <= n; i++) {
            int tn = t0 + t1 + t2;
            t0 = t1;
            t1 = t2;
            t2 = tn;
        }
        
        return t2;
    }
}