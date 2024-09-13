/* 901. Online Stock Span
Difficulty: Medium
Submission Link: https://leetcode.com/problems/online-stock-span/submissions/1384560759/ */

class StockSpanner {
public:
    vector<int> stock;

    StockSpanner() {
        stock = vector<int>();
    }

    int next(int price) {
        stock.push_back(price);
        for (int i = stock.size() - 2; i >= 0; i--) {
            if (stock[i] > price) {
                return stock.size() - 1 - i;
            }
        }
        return stock.size();
    }
};