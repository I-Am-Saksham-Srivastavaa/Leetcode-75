""" 328. Odd Even Linked List
Difficulty: Medium
Submission Link: https://leetcode.com/problems/odd-even-linked-list/submissions/1386386356/ """

class Solution:
    def oddEvenList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head is None:
            return head

        odd = head
        even = odd.next
        evenHead = even

        while even and even.next:
            odd.next = even.next
            odd = odd.next
            even.next = odd.next 
            even = even.next 

        odd.next = evenHead
        return head 
  