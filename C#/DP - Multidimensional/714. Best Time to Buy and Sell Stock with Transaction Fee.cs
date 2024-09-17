/* 714. Best Time to Buy and Sell Stock with Transaction Fee
Difficulty: Medium
Submission Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/submissions/1390162593/ */

public class Solution {
    public int MaxProfit(int[] prices, int fee) {
        int n = prices.Length;
        int maxProfit = 0;
        int minPrice = prices[0];
        
        for (int i = 1; i < n; i++) {
            
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            } 
            else if (prices[i] > minPrice + fee) {
                maxProfit += prices[i] - minPrice - fee;
                minPrice = prices[i] - fee;
            }
        }
        
        return maxProfit;
    }
}