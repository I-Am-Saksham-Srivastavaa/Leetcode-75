/* 1318. Minimum Flips to Make a OR b Equal to c
Difficulty: Medium
Submission Link: https://leetcode.com/problems/minimum-flips-to-make-a-or-b-equal-to-c/submissions/1388963710/ */

int minFlips(int a, int b, int c) {
    int cnt = 0;
    while (a || b || c) {
        bool aa = (a & 1);
        bool bb = (b & 1);
        bool cc = (c & 1);
        if ((aa | bb) != cc) {
            if (aa && bb)
                cnt += 2;
            else
                cnt++;
        }

        a = a >> 1;
        b = b >> 1;
        c = c >> 1;
    }
    return cnt;
}