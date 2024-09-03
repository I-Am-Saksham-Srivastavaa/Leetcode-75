// 1431. Kids With the Greatest Number of Candies
// Difficulty: Easy
// Submission Link: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/submissions/1017413901

bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize){
    int maxCandies = 0;
    for (int i = 0; i < candiesSize; i++) {
        if (candies[i] > maxCandies) {
            maxCandies = candies[i];
        }
    }
    
    *returnSize = candiesSize;
    bool* result = (bool*)malloc(candiesSize * sizeof(bool));
    for (int i = 0; i < candiesSize; i++) {
        result[i] = (candies[i] + extraCandies >= maxCandies);
    }
    
    return result;
}