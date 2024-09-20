/* 2130. Maximum Twin Sum of a Linked List
Difficulty: Medium
Submission Link: https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/submissions/1391188503/ */

public class Solution {
    public int PairSum(ListNode head) {
            List<int> datas = new();
            while (head != null)
            {
                datas.Add(head.val);
                head = head.next;
            }
            int sum = 0;
            for (int i = 0; i < datas.Count / 2; i++)
                if (datas[i] + datas[datas.Count - i - 1] > sum)
                    sum = datas[i] + datas[datas.Count - i - 1];
            return sum;
    }
}