""" 2130. Maximum Twin Sum of a Linked List
Difficulty: Medium
Submission Link: https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/submissions/1391188074/ """

class Solution:
    def pairSum(self, head: Optional[ListNode]) -> int:
        ls = []
        high=0
        while(head):
            ls.append(head.val)
            head=head.next
        l = len(ls)
        for i in range(int(l/2)):
                high = max(high,ls[i]+ls[l-1-i])
        return high
        