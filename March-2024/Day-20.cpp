# Merge In Between Linked Lists (Leetcode 1669)#
Problem link: https://leetcode.com/problems/merge-in-between-linked-lists/

ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
    if(list1 == nullptr ) return nullptr;
    ListNode* head;
    int count=0;

    if(count==a){
        head=list2;
    }
    else{
        head=list1;
        count++;
        while(count!=a){
            list1=list1->next;
            ++count;
        }
        ListNode *temp=list1;
        list1=list1->next;
        temp->next=list2;
    }

    while(count!=b){
        ++count;
        list1=list1->next;
    }

    while(list2->next != nullptr){
        list2=list2->next;
    }
    
    list2->next=list1->next;
    return head;
}