""" 206. Reverse Linked List
Difficulty: Easy
Submission Link: https://leetcode.com/problems/reverse-linked-list/submissions/1391195182/ """

class Solution:
    def reverseList(self, head):
        prev = None
        current = head
        
        while current:
            next_node = current.next
            current.next = prev
            prev = current
            current = next_node
        
        return prev