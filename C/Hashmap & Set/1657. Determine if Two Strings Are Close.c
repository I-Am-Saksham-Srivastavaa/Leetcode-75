/* 1657. Determine if Two Strings Are Close
Difficulty: Medium
Submission Link: https://leetcode.com/problems/determine-if-two-strings-are-close/submissions/1146084248/ */

int cmp(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}

bool closeStrings(char* word1, char* word2) {
    if(strlen(word1)!=strlen(word2))
        return false;
    int char_word1[26]={0};
    int char_word2[26]={0};
    for(int i=0;i<strlen(word1);i++){
        char_word1[word1[i] - 'a']++;
        char_word2[word2[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++){
        if(char_word1[i]== 0 && char_word2[i]!= 0)
            return false;
        if(char_word2[i]== 0 && char_word1[i]!= 0)
            return false;
    }
    qsort(char_word1, 26, sizeof(int), cmp);
    qsort(char_word2, 26, sizeof(int), cmp);
    for(int i = 0; i < 26; i++){
        if(char_word1[i] != char_word2[i])
            return false;
    }
    return true;
}