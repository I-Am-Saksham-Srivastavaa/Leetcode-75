//  1768. Merge Strings Alternately
//  Difficulty: Easy
// Submission Link: https://leetcode.com/problems/merge-strings-alternately/submissions/1016823533/

var mergeAlternately = function(word1, word2) {
    let len1 = word1.length;
    let len2 = word2.length;
    
    let merged = '';
    let i = 0, j = 0;
    
    while (i < len1 && j < len2) {
        merged += word1[i++] + word2[j++];
    }
    
    while (i < len1) {
        merged += word1[i++];
    }
    
    while (j < len2) {
        merged += word2[j++];
    }
    
    return merged;
};