// Double a Number Represented as a Linked List(Leetcode 2816)
// Problem Link: https://leetcode.com/problems/double-a-number-represented-as-a-linked-list/

ListNode* reverse(ListNode *head){
    ListNode *p=head,*q=nullptr, *r=nullptr;
    
    while(p!=nullptr){
        r=q;
        q=p;
        p=p->next;
        
        q->next=r;
    }
    
    return q;
}

ListNode* doubleIt(ListNode* head) {
    ListNode *hd=reverse(head);
    ListNode *temp=hd;
    int carry=0;
    
    while(temp){
        int val=(temp->val)*2+carry;
        temp->val=val%10;
        carry=val/10;
        temp=temp->next;
    }
    
    head=reverse(hd);
    if(carry!=0){
        temp=new ListNode(1);
        temp->next=head;
        head=temp;
    }
    
    return head;
}