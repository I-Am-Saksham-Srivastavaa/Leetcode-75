/* 392. Is Subsequence
Difficulty: Medium
Submission Link: https://leetcode.com/problems/is-subsequence/submissions/1246684124/ */

bool isSubsequence(char* s, char* t) {
    while(*s && *t) {
        if(*s == *t) {
            s++;
        }
        t++;
    }
    return *s == '\0';
}