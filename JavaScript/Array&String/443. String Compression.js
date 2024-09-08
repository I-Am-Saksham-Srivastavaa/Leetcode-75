/* 443. String Compression
Difficulty: Medium
Submission Link: https://leetcode.com/problems/string-compression/submissions/1030286206/ */

var compress = function(chars) {
    let currentElement = null;
    let prevElement = chars[0];
    let count = 1;
    let index = 1;
    for (; index < chars.length; index++) {
        const tempStore = chars[index];
        currentElement = chars[index];
        if (prevElement == currentElement) {
            chars[index] = undefined;
            count++;
        } else {
            if (count > 1) {
                chars[index - 1] = count;
            }
            count = 1;
        }
        prevElement = tempStore;
    }
    if (count > 1) {
        chars[index - 1] = count;
    }
    let output = 0;
    for (let index = 0; index < chars.length; index++) {
        if (chars[index] !== undefined) {
            if (typeof chars[index] === 'number') {
                const char = chars[index].toString();
                if (char.length === 2) {
                    const [firstNum, secondaryNum] = char.split('');
                    chars[index - 1] = firstNum.toString();
                    chars[index] = secondaryNum.toString();
                } else if (char.length === 3) {
                    const [firstNum, secondaryNum, thirdNum] = char.split('');
                    chars[index - 1 - 1] = firstNum;
                    chars[index - 1] = secondaryNum;
                    chars[index] = thirdNum;
                } else if (char.length === 4) {
                    const [firstNum, secondaryNum, thirdNum, fourthNum] = char.split('');
                    chars[index - 1 - 1 - 1] = firstNum;
                    chars[index - 1 - 1] = secondaryNum;
                    chars[index - 1] = thirdNum;
                    chars[index] = fourthNum;
                }
            } else {
                output++;
            }
        }
    }
    let emptyIndex = 0;
    let index11 = 0;
    for (; index11 < chars.length; index11++) {
        if (chars[index11] !== undefined) {
            chars[emptyIndex++] = chars[index11].toString();
        }
    }
    chars.splice(emptyIndex);
    return;
};