/* 2095. Delete the Middle Node of a Linked List
Difficulty: Easy
Submission Link: https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/submissions/1386446525/ */

var deleteMiddle = function(head) {
    if(head === null)return null;
    prev = new ListNode(0);
    prev.next = head;
    slow = prev;
    fast = head;
    while(fast != null && fast.next != null){
        slow = slow.next;
        fast = fast.next.next;
    }
    slow.next = slow.next.next;
    return prev.next;
};