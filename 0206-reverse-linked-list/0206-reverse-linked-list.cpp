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
    ListNode* reverseList(ListNode* head) {
        ListNode * previous = NULL;
        ListNode * current  = head;
       
        if(head==NULL){
            return head;
        }
        ListNode * nextt = head->next;
        while(nextt!=NULL){
            current->next = previous;
            previous = current;
            current = nextt;
            nextt = nextt->next;
        }
        current-> next = previous;
        head = current;
        return head;
    }
};