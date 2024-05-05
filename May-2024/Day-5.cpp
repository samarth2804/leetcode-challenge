// Delete Node in a Linked List (Leetcode 237)
// Problem Link: https://leetcode.com/problems/delete-node-in-a-linked-list/description/

void deleteNode(ListNode* node) {
    if(!node->next){
        return;
    }

    node->val=node->next->val;
    ListNode *p=node->next;
    node->next=node->next->next;
    delete p;
}