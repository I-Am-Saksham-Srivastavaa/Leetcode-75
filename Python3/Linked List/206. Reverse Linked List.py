""" 206. Reverse Linked List
Difficulty: Easy
Submission Link: https://leetcode.com/problems/reverse-linked-list/submissions/1391194129/ """

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        node = None

        while head:
            temp = head.next
            head.next = node
            node = head
            head = temp
        
        return node