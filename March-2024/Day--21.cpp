# Reverse Linked List (Leetcode 206)#
# problem link : https://leetcode.com/problems/reverse-linked-list #

ListNode* reverseList(ListNode* head) {
    ListNode* p=head;
    ListNode* q=nullptr;
    ListNode* r=nullptr;
    while(p){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    head=q;

    return head;
}