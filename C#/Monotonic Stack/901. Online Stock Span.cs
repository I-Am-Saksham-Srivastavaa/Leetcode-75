/* 901. Online Stock Span
Difficulty: Medium
Submission Link: https://leetcode.com/problems/online-stock-span/submissions/1384560941/ */

public class StockSpanner {
    Stack<(int, int)> stack = new();

    public StockSpanner() {
        
    }
    
    public int Next(int price) {
        int ans = 1;
        while(stack.Count>0 && stack.Peek().Item1<=price)
        {
            ans+= stack.Pop().Item2;
        }

        stack.Push((price, ans));

        return ans;
    }
}