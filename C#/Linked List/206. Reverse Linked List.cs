/* 206. Reverse Linked List
Difficulty: Easy
Submission Link: https://leetcode.com/problems/reverse-linked-list/submissions/1391194876/ */

public class Solution {
    public ListNode ReverseList(ListNode head) {
        ListNode prev = null;
        ListNode current = head;
        ListNode nextNode = null;
        
        while (current != null) {
            nextNode = current.next;
            current.next = prev;
            prev = current;
            current = nextNode;
        }
        
        return prev;
    }
}