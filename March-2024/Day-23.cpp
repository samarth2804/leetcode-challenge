# Reorder List (Leetcode 143) #
# Problem Link: https://leetcode.com/problems/reorder-list/description

void reorderList(ListNode* head) {
        if(head==nullptr || head->next == nullptr) return;
         unordered_map<ListNode*, ListNode*> umap;
         ListNode* last=head;
         ListNode* prev=nullptr;
         int n=0;
         while(last){
             ++n;
             umap[last]=prev;
             prev=last;
             last=last->next;
         }

        last=prev;
        ListNode* first=head;
        int x=(n-1)/2;
        
        bool b=true;
        while(b){
           if(first->next == last) break;
           if( first->next==umap[last]){
            b=false;
           }
           ListNode* temp=first->next;
           first->next=last;
           last->next=temp;
           first=temp;
           last=umap[last];
        }

        last->next=nullptr;

    ////////////////////////second approach using stack////////////////////////////////////////
        // stack<ListNode *> st;
        // ListNode *last = head;
        // while(last){
        //     st.push(last);
        //     last = last->next;
        // }

        // last = head;
        // int n = st.size();
        // int x = (n-1)/2;

        // while(x--){

        //     ListNode *temp = st.top();
        //     st.pop();
        //     temp->next=last->next;
        //     last->next = temp;
        //     last = temp->next;
        // }       

        //last->next=nullptr;
    }