""" 208. Implement Trie (Prefix Tree)
Difficulty: Medium
Submisssion Link: https://leetcode.com/problems/implement-trie-prefix-tree/submissions/1387457051/ """

class Trie(object):

    def __init__(self):
        self.root = {}

    def insert(self, word):
        cur = self.root
        for w in word:
            if not w in cur:
                cur[w] = {}
            cur = cur[w]
        cur['*'] = ''
        

    def search(self, word):
        cur = self.root
        for w in word:
            if not w in cur:
                return False
            cur = cur[w]
        return True if '*' in cur else False

    def startsWith(self, prefix):
        cur = self.root
        for w in prefix:
            if not w in cur:
                return False
            cur = cur[w]
        return True