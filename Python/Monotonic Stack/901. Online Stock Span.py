""" 901. Online Stock Span
Difficulty: Medium
Submission Link: https://leetcode.com/problems/online-stock-span/submissions/1384560648/ """

class StockSpanner(object):

    def __init__(self):
        self.data = []

    def next(self, price):
        idx = len(self.data) - 1

        while self.data and idx > -1 and self.data[idx][0] <= price:
            idx -= self.data[idx][1]

        days = len(self.data) - idx
        self.data.append([price, days])

        return days
        days = 1
        for i in range(len(self.prices) - 2, -1, -1):
            p = self.prices[i]

            if price >= p:
                days += 1
            else:
                break

        return days