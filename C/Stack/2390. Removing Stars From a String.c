/* 2390. Removing Stars From a String
Difficulty: Easy
Submission Link: https://leetcode.com/problems/removing-stars-from-a-string/submissions/1375561467/ */

char* removeStars(char* s) {
    int top=0,i;
    for(i=0;s[i];i++)
        (s[i]!='*')?(s[top++]=s[i]):top--;
    s[top]=NULL;
    return s;
}