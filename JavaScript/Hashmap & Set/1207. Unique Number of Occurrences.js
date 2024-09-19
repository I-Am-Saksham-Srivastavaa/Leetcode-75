/* 1207. Unique Number of Occurrences
Difficulty: Easy
Submission Link: https://leetcode.com/problems/unique-number-of-occurrences/submissions/1148977072/ */

var uniqueOccurrences = function(arr) {
    const frequency = new Map();
    for(let num of arr)
        if(frequency.has(num)) frequency.set(num, frequency.get(num)+1);
        else frequency.set(num,1);
    const storage = new Set(Array.from(frequency.values()));
    return frequency.size == storage.size;
};