""" 901. Online Stock Span
Difficulty: Medium
Submission Link: https://leetcode.com/problems/online-stock-span/submissions/1384558003/ """

class StockSpanner:

    def __init__(self):
        self.stock = []

    def next(self, price: int) -> int:
        self.stock.append(price)
        for i in range(len(self.stock) - 2, -1, -1):
            if self.stock[i] > price:
                return len(self.stock) - 1 - i
        return len(self.stock)