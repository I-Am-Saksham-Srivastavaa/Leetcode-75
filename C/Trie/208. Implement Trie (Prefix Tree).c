/* 208. Implement Trie (Prefix Tree)
Difficulty: Medium
Submisssion Link: https://leetcode.com/problems/implement-trie-prefix-tree/submissions/1387457831/ */

typedef struct Node {
    struct Node* arr[26];
    bool flag;
} Trie;

Trie* trieCreate() {
    Trie* root = malloc(sizeof(Trie));
    for (int i = 0; i < 26; i++)
        root->arr[i] = NULL;
    root->flag = false;
    return root;
}

void trieInsert(Trie* obj, char* word) {
    Trie* currObj = obj;
    for (int i = 0; i < strlen(word); i++) {
        char c = word[i] - 'a';
        if (currObj->arr[c] == NULL)
            currObj->arr[c] = trieCreate();
        currObj = currObj->arr[c];
    }
    currObj->flag = true;
}

bool trieSearch(Trie* obj, char* word) {
    Trie* currObj = obj;
    for (int i = 0; word[i] != '\0'; i++) {
        char c = word[i] - 'a';
        if (currObj->arr[c] == NULL)
            return false;
        currObj = currObj->arr[c];
    }
    return currObj->flag ? true : false;
}

bool trieStartsWith(Trie* obj, char* prefix) {
    Trie* currObj = obj;
    for (int i = 0; prefix[i] != '\0'; i++) {
        char c = prefix[i] - 'a';
        if (currObj->arr[c] == NULL)
            return false;
        currObj = currObj->arr[c];
    }
    return true;
}

void trieFree(Trie* obj) {
    Trie* currObj = obj;
    for (int i = 0; i < 26; i++)
        if (currObj->arr[i] != NULL)
            trieFree(currObj->arr[i]);
    free(obj);
}