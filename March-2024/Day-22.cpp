# Palindrome Linked List (Leetcode 234) #
# problem link: https://leetcode.com/problems/palindrome-linked-list/description/

ListNode* reverse(ListNode* head){
    if(head==nullptr || head->next==nullptr) return head;
    ListNode *p=head->next, *q=head, *r=nullptr;
    while(q){
        q->next=r;
        r=q;
        q=p;
        if(p){
            p=p->next;
        }
    }

    return r;
}

bool isPalindrome(ListNode* head) {
    if(head==nullptr || head->next==nullptr) return true;
    ListNode *slow=head, *fast=head->next, *temp1=head;

    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }

    ListNode *temp2=slow->next;
    slow->next=nullptr;
    temp2=reverse(temp2);

    while(temp2){
        if(temp1->val != temp2->val) return false;

        temp1=temp1->next;
        temp2=temp2->next;
    }

    return true;
}