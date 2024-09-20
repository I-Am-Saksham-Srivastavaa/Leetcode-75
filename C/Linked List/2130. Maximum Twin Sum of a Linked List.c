/* 2130. Maximum Twin Sum of a Linked List
Difficulty: Medium
Submission Link: https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/submissions/1391189055/ */

int pairSum(struct ListNode* head) {
    int size = 0;
    int maxTwinSum;
    struct ListNode* ptr = head;
    
    while (ptr) {
        size++;
        ptr = ptr->next;
    }

    int* arr = (int*)malloc(size * sizeof(int));
    
    int i = 0, j = size - 1;
    ptr = head;
    while (ptr) {
        arr[i++] = ptr->val;
        ptr = ptr->next;
    }

    maxTwinSum = arr[0] + arr[j];
    for (i = 0; i < size/2; i++) {
        if (arr[i] + arr[j] > maxTwinSum) {
            maxTwinSum = arr[i] + arr[j];
        }
        j--;
    }

    return maxTwinSum;
}