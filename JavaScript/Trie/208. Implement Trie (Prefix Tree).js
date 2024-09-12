/* 208. Implement Trie (Prefix Tree)
Difficulty: Medium
Submisssion Link: https://leetcode.com/problems/implement-trie-prefix-tree/submissions/1387456833/
*/

class Trie 
{
    constructor() {
        this.data = new Set()
        this.prefs = new Set()
    }
    insert(w) {
        let cur = ''
        for (let i = 0; i < w.length; i++) {
            cur += w[i]
            this.prefs.add(cur)
        }
        this.data.add(w)

    }
    search(w) {
        return this.data.has(w)
    }
    startsWith(pref) {
        return this.prefs.has(pref)
    }
}