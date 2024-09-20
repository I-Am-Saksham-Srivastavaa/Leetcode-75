/* 2130. Maximum Twin Sum of a Linked List
Difficulty: Medium
Submission Link: https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/submissions/1391188024/
*/

var pairSum = function(head) {
    let maxSum = 0;
    let fast = head;
    let slow = head;
    while(fast && fast.next){
        fast = fast.next.next;
        slow = slow.next;
    }
    fast = head;
    slow = reverse(slow);
    
    function reverse(head){
        let prev = null;
        let current = head;
        while(current){
            let next = current.next;
            current.next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }
    while(slow){
        let sum = fast.val + slow.val;
        maxSum = Math.max(sum,maxSum);
        slow = slow.next;
        fast = fast.next;
    }
    return maxSum;
};