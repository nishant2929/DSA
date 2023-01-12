class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       if(head==NULL||head->next==NULL) return head;
       ListNode* pre=NULL;
       ListNode* cur=head;
       while(cur){
           ListNode* temp=cur->next;
           cur->next=pre;
           pre=cur;
           cur=temp;
       }
    return pre;
    }
};