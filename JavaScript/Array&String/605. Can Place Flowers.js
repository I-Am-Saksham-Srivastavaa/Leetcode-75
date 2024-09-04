/* 605. Can Place Flowers
Difficulty: Easy
Submission Link: https://leetcode.com/problems/can-place-flowers/submissions/1017427192
 */

var canPlaceFlowers = function(flowerbed, n) {
    let count = 0;
    for (let i = 0; i < flowerbed.length; i++) {
        if (flowerbed[i] === 0) {
            if ((i === 0 || flowerbed[i - 1] === 0) && (i === flowerbed.length - 1 || flowerbed[i + 1] === 0)) {
                flowerbed[i] = 1;
                count++;
            }
        }
    }
    return count >= n;
};
