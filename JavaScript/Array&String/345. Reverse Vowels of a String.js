
/* 345. Reverse Vowels of a String
Difficulty: Easy
Submission Link: https://leetcode.com/problems/reverse-vowels-of-a-string/submissions/1017553951/
*/
var reverseVowels = function(s) {
    const vowels = new Set(['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']);
    const strArr = s.split('');
    let left = 0;
    let right = s.length - 1;
    
    while (left < right) {
        while (left < right && !vowels.has(strArr[left])) {
            left++;
        }
        while (left < right && !vowels.has(strArr[right])) {
            right--;
        }
        
        const temp = strArr[left];
        strArr[left] = strArr[right];
        strArr[right] = temp;
        
        left++;
        right--;
    }
    
    return strArr.join('');
};