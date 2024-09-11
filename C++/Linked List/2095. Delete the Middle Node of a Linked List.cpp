/* 2095. Delete the Middle Node of a Linked List
Difficulty: Easy
Submission Link: https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/submissions/1386446820/ */

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL)return NULL;
        ListNode* prev = new ListNode(0);
        prev->next = head;
        ListNode* slow = prev;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->next = slow->next->next;
        return prev->next;
    }
};