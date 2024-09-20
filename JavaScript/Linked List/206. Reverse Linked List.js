/* 206. Reverse Linked List
Difficulty: Easy
Submission Link: https://leetcode.com/problems/reverse-linked-list/submissions/1391193905/
*/

var reverseList = function(head) {
    let node = null;

    while (head) {
        const temp = head.next;
        head.next = node;
        node = head;
        head = temp;
    }

    return node;    
};