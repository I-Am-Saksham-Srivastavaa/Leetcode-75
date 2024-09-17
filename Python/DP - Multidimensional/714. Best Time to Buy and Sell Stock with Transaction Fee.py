""" 714. Best Time to Buy and Sell Stock with Transaction Fee
Difficulty: Medium
Submission Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/submissions/1390158758/ """

class Solution:
    def maxProfit(self, prices, fee):
        free = 0
        hold = -prices[0]
        for i in prices:
            tmp = hold
            hold = max(hold, free - i)
            free = max(free, tmp + i - fee)
        return free