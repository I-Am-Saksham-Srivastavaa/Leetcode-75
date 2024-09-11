/* 739. Daily Temperatures 
Difficulty: Medium
Submission Link: https://leetcode.com/problems/daily-temperatures/submissions/1384488121/ */

public class Solution {
    public int[] DailyTemperatures(int[] temps) {
        int[] results = new int[temps.Length];
        Stack<int> stack = new Stack<int>();
        
        for (int i = 0; i < temps.Length; i++) {
            while (stack.Count > 0 && temps[stack.Peek()] < temps[i]) {
                int index = stack.Pop();
                results[index] = i - index;
            }
            stack.Push(i);
        }

        return results;
    }
}