/* 206. Reverse Linked List
Difficulty: Easy
Submission Link: https://leetcode.com/problems/reverse-linked-list/submissions/1391195351/ */

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev=NULL;
    struct ListNode* temp=head;
    while(temp){
        struct ListNode* next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;

    }return prev;
}