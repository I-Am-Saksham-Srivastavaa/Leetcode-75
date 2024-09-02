// 1071. Greatest Common Divisor of Strings
// Difficulty: Easy
// https://leetcode.com/problems/greatest-common-divisor-of-strings/submissions/1017428447/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* gcdOfStrings(char* str1, char* str2) {
    if (strcmp(str1, str2) == 0) {
        return str1;
    }
    
    if (strlen(str1) < strlen(str2)) {
        char* temp = str1;
        str1 = str2;
        str2 = temp;
    }
    
    if (strncmp(str1, str2, strlen(str2)) == 0) {
        return gcdOfStrings(str1 + strlen(str2), str2);
    }
    
    return "";
}