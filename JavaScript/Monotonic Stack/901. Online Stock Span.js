/* 901. Online Stock Span
Difficulty: Medium
Submission Link: https://leetcode.com/problems/online-stock-span/submissions/1384557170/ */

var StockSpanner = function() {
    this.stock = []
};

StockSpanner.prototype.next = function(price) {
     this.stock.push(price)
    for(let i=this.stock.length-2;i>=0;i--){

        if(this.stock[i] > price){
            return this.stock.length-1 - i
        }
    }
    return this.stock.length
};