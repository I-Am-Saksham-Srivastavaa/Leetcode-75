""" 714. Best Time to Buy and Sell Stock with Transaction Fee
Difficulty: Medium
Submission Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/submissions/1390158602/ """

class Solution:
    def maxProfit(self, a: list[int], f: int) -> int:
        m = {}
        return self.pp(a, 0, 1, f, m)

    def pp(self, a, i, buy, f, m):
        if i >= len(a):
            return 0
        if i not in m:
            m[i] = {}
        if buy in m[i]:
            return m[i][buy]

        if buy:
            k = max(self.pp(a, i + 1, 0, f, m) - a[i] - f, self.pp(a, i + 1, 1, f, m))
        else:
            k = max(a[i] + self.pp(a, i + 1, 1, f, m), self.pp(a, i + 1, 0, f, m))

        m[i][buy] = k
        return k