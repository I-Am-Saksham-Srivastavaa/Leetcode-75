// 1431. Kids With the Greatest Number of Candies
// Difficulty: Easy
// Submission Link: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/submissions/1017415796

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = *max_element(candies.begin(), candies.end());
        vector<bool> result;
        
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= maxCandies) {
                result.push_back(true);
            } else {
                result.push_back(false);
            }
        }
        
        return result;
    }
};