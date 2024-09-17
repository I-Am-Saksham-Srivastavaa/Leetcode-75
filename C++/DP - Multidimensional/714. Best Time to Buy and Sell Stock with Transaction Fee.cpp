/* 714. Best Time to Buy and Sell Stock with Transaction Fee
Difficulty: Medium
Submission Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/submissions/1390162488/ */

class Solution {
public:
    int maxProfit(std::vector<int>& prices, int fee) {
        int n = prices.size();
        std::vector<int> dp(2, 0);
        dp[0] = 0;
        dp[1] = -prices[0] - fee;

        for (int i = 1; i < n; ++i) {
            dp[0] = std::max(dp[0], dp[1] + prices[i]);
            dp[1] = std::max(dp[1], dp[0] - prices[i] - fee);
        }

        return dp[0];
    }
};