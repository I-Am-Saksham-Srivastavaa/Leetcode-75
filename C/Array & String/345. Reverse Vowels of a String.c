// 345. Reverse Vowels of a String
// Difficulty : Easy
// Submission Link: https://leetcode.com/problems/reverse-vowels-of-a-string/submissions/1017544569/

bool isVowel(char c) {
    return c == 'a' || c == 'A' ||
           c == 'e' || c == 'E' ||
           c == 'i' || c == 'I' ||
           c == 'o' || c == 'O' ||
           c == 'u' || c == 'U';
}

char* reverseVowels(char* s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        if (!isVowel(s[left])) {
            left++;
            continue;
        }
        if (!isVowel(s[right])) {
            right--;
            continue;
        }

        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }

    return s;
}