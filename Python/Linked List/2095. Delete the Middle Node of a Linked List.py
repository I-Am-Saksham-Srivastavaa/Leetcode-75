""" 2095. Delete the Middle Node of a Linked List
Difficulty: Easy
Submission Link: https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/submissions/1386446716/ """

class Solution(object):
    def deleteMiddle(self, head):
        if head == None :return None
        prev = ListNode(0)
        prev.next = head
        slow = prev
        fast = head
        while fast != None and fast.next != None:
            slow = slow.next
            fast = fast.next.next
        
        slow.next = slow.next.next
        return prev.next