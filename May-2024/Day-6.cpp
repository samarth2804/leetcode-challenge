// Remove Nodes From Linked List (Leetcode 2487)
// Problem Link: https://leetcode.com/problems/remove-nodes-from-linked-list/

ListNode* removeNodes(ListNode* head) {
    if (!head) return NULL;
    head->next = removeNodes(head->next);
    return head->next && head->val < head->next->val ?  head->next : head;
}