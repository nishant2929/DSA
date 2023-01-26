/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode*reverse(ListNode*head){
        // if(head==NULL && head->next==NULL){
        //     return NULL;
        // }
        ListNode*previous=NULL;
        ListNode*nex =NULL;
        while(head!=NULL){
           nex=head->next;
           head->next=previous;
            previous=head;
            head=nex;
        }
        return previous;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head,*fast=head;
        while(fast->next&& fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverse(slow->next);
        slow=slow->next;
        while(slow!=NULL){
            if(head->val !=slow->val){
                return false;
            }
            slow=slow->next;

            head=head->next;
        }
        return true;
    }
};