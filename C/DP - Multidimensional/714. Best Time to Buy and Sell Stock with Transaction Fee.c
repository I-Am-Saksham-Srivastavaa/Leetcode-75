/* 714. Best Time to Buy and Sell Stock with Transaction Fee
Difficulty: Medium
Submission Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/submissions/1390162765/ */

int maxProfit(int* prices, int pricesSize, int fee) {
    int cash=0;
    int hold=-prices[0];

    for(int i=1;i<pricesSize;i++){

        int prev_cash=cash;

        cash=cash>hold+prices[i]-fee?cash:hold+prices[i]-fee;
        hold=hold>prev_cash-prices[i]?hold:prev_cash-prices[i];

    }

    return cash;
}