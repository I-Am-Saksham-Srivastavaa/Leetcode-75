/* 151. Reverse Words in a String
Difficulty: Medium
Submission Link: https://leetcode.com/problems/reverse-words-in-a-string/submissions/1017559504/ */

class Solution {
public:
    string reverseWords(string s) {
        istringstream iss(s);
        string word, reversed;
        bool isFirstWord = true;
        
        while (iss >> word) {
            if (!isFirstWord) {
                reversed = word + " " + reversed;
            } else {
                reversed = word;
                isFirstWord = false;
            }
        }
        
        return reversed;
    }
};