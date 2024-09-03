/* 1431. Kids With the Greatest Number of Candies
Diffficulty : Easy
Submission Link : https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/submissions/1017419516 */

var kidsWithCandies = function(candies, extraCandies) {
    const maxCandies = Math.max(...candies);
    return candies.map(candy => candy + extraCandies >= maxCandies);
};