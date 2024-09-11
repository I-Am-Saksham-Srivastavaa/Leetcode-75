""" 2095. Delete the Middle Node of a Linked List
Difficulty: Easy
Submission Link: https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/submissions/1386446625/ """

class Solution:
    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head.next:
            return
        slow,fast=head,head
        while fast and fast.next:
            slow=slow.next
            if fast.next and fast.next.next:
                fast=fast.next.next
            else:
                fast=fast.next
        if slow.next:
            slow.val=slow.next.val
            slow.next=slow.next.next
        else:
            head.next=None
        return head