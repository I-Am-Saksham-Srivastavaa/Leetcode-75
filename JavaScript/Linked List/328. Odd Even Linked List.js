/* 328. Odd Even Linked List
Difficulty: Medium
Submission Link: https://leetcode.com/problems/odd-even-linked-list/submissions/1386386215/
*/

var oddEvenList = function(head) {
    if (head === null || head.next === null) return head;
    
    let odd = new ListNode(0);
    let odd_ptr = odd;
    let even = new ListNode(0);
    let even_ptr = even;
    let idx = 1;
    
    while (head !== null) {
        if (idx % 2 === 0) {
            even_ptr.next = head;
            even_ptr = even_ptr.next;
        } else {
            odd_ptr.next = head;
            odd_ptr = odd_ptr.next;
        }
        head = head.next;
        idx++;
    }
    
    even_ptr.next = null;
    odd_ptr.next = even.next;
    
    return odd.next;
};