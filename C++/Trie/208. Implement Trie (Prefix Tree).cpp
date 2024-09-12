/* 208. Implement Trie (Prefix Tree)
Difficulty: Medium
Submisssion Link: https://leetcode.com/problems/implement-trie-prefix-tree/submissions/1387457489/ */

struct Node {
    Node* arr[26];
    bool flag = 0;
};
class Trie {
private:
    Node* root;

public:
    Trie() { root = new Node(); }

    void insert(string word) {
        int n = word.size();
        Node* node = root;
        for (int i = 0; i < n; i++) {
            if (node->arr[word[i] - 'a'] == NULL) {
                node->arr[word[i] - 'a'] = new Node();
            }
            node = node->arr[word[i] - 'a'];
        }
        node->flag = true;
    }

    bool search(string word) {
        int n = word.size();
        Node* node = root;
        for (int i = 0; i < n; i++) {
            if (node->arr[word[i] - 'a'] == NULL) {
                return false;
            }
            node = node->arr[word[i] - 'a'];
        }
        return node->flag;
    }

    bool startsWith(string prefix) {
        int n = prefix.size();
        Node* node = root;
        for (int i = 0; i < n; i++) {
            if (node->arr[prefix[i] - 'a'] == NULL) {
                return false;
            }
            node = node->arr[prefix[i] - 'a'];
        }
        return true;
    }
};