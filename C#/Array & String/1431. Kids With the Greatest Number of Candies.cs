// 1431. Kids With the Greatest Number of Candies
// Difficulty: Easy
// Submissions Link: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/submissions/1017414992/
public class Solution {
    public IList<bool> KidsWithCandies(int[] candies, int extraCandies) {
        int maxCandies = candies.Max();
        List<bool> result = new List<bool>();
        
        foreach (int candyCount in candies) {
            result.Add(candyCount + extraCandies >= maxCandies);
        }
        
        return result;
    }
}