""" 328. Odd Even Linked List
Difficulty: Medium
Submission Link: https://leetcode.com/problems/odd-even-linked-list/submissions/1386386762/ """

class Solution(object):
    def oddEvenList(self, head):
        if head == None or head.next == None : return head 
        odd = ListNode(0) 
        odd_ptr = odd
        even = ListNode(0)
        even_ptr = even 
        idx = 1 
        while head != None :
            if idx % 2 == 0:
                even_ptr.next = head
                even_ptr = even_ptr.next
            else:
                odd_ptr.next = head
                odd_ptr = odd_ptr.next
            head = head.next
            idx+=1
        even_ptr.next = None
        odd_ptr.next = even.next
        return odd.next