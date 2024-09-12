""" 208. Implement Trie (Prefix Tree)
Difficulty: Medium
Submisssion Link: https://leetcode.com/problems/implement-trie-prefix-tree/submissions/1387456951/ """

class TrieNode:
    def __init__(self):
        self.child = [None] * 26
        self.end = False
class Trie:

    def __init__(self):
        self.root = TrieNode()

    def insert(self, word: str) -> None:
        newNode = self.root
        for char in word:
            if newNode.child[ord(char) - ord('a')] == None:
                newNode.child[ord(char) - ord('a')] = TrieNode()
            newNode = newNode.child[ord(char) - ord('a')]
        newNode.end = True

    def search(self, word: str) -> bool:
        newNode = self.root
        for char in word:
            if newNode.child[ord(char) - ord('a')] == None:
                return False
            newNode = newNode.child[ord(char) - ord('a')]

        return True if newNode.end == True else False

    def startsWith(self, prefix: str) -> bool:
        newNode = self.root
        for char in prefix:
            if newNode.child[ord(char) - ord('a')] == None:
                return False
            newNode = newNode.child[ord(char) - ord('a')]
        return True