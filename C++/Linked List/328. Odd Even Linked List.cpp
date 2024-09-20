/* 328. Odd Even Linked List
Difficulty: Medium
Submission Link: https://leetcode.com/problems/odd-even-linked-list/submissions/1386387648/ */

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL)return head;
        ListNode* odd = new ListNode(0);
        ListNode* odd_ptr = odd;
        ListNode* even = new ListNode(0);
        ListNode* even_ptr = even;
        int idx = 1;
        while(head != NULL){
            if(idx % 2 == 0){
                even_ptr->next = head;
                even_ptr = even_ptr->next;
            }else{
                odd_ptr->next = head;
                odd_ptr = odd_ptr->next;
            }
            head = head->next;
            idx++;
        }
        even_ptr->next = NULL;
        odd_ptr->next = even->next; 
        return odd->next;
    }
};