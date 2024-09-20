/* 206. Reverse Linked List
Difficulty: Easy
Submission Link: https://leetcode.com/problems/reverse-linked-list/submissions/1391194794/ */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* node = nullptr;

        while (head != nullptr) {
            ListNode* temp = head->next;
            head->next = node;
            node = head;
            head = temp;
        }

        return node;        
    }
};