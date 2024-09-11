/* 2095. Delete the Middle Node of a Linked List
Difficulty: Easy
Submission Link: https://binarysearch.com/problems/delete-the-middle-node-of-a-linked-list/submissions/1386447007/ */

struct ListNode* deleteMiddle(struct ListNode* head) {
    if (head == NULL) return NULL;
    struct ListNode* prev = (struct ListNode*)malloc(sizeof(struct ListNode));
    prev->val = 0;
    prev->next = head;
    struct ListNode* slow = prev;
    struct ListNode* fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    struct ListNode* temp = slow->next;
    slow->next = slow->next->next;
    free(temp); 
    struct ListNode* newHead = prev->next;
    free(prev);
    return newHead;
}