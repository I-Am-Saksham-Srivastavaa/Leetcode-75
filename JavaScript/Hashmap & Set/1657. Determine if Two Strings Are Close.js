/* 1657. Determine if Two Strings Are Close
Difficulty: Medium
Submission Link: https://leetcode.com/problems/determine-if-two-strings-are-close/submissions/1146085227/
*/

var closeStrings = function(word1, word2) {
    if (word1.length !== word2.length) {
        return false;
    }

    if (word1 === word2) {
        return true;
    }

    const firstSet = new Array(26).fill(0);
    const secondSet = new Array(26).fill(0);

    for (let i = 0; i < word1.length; i++) {
        firstSet[word1.charCodeAt(i) - 'a'.charCodeAt(0)]++;
        secondSet[word2.charCodeAt(i) - 'a'.charCodeAt(0)]++;
    }
    for (let i = 0; i < 26; i++) {
        if ((firstSet[i] === 0 && secondSet[i] !== 0) || (firstSet[i] !== 0 && secondSet[i] === 0)) {
            return false;
        }
    }
    firstSet.sort((a, b) => a - b);
    secondSet.sort((a, b) => a - b);

    for (let i = 0; i < 26; i++) {
        if (firstSet[i] !== secondSet[i]) {
            return false;
        }
    }
    return true;
};