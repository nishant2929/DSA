/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
            ListNode *one = head;
            ListNode *two = head;
            ListNode *entry = head;
        while(two->next && two->next->next){
            one = one->next;
            two = two->next->next;
            if(one==two){
                while(entry!=one){
                    one=one->next;
                    entry= entry->next;
                }
                return entry;
            }
        }
        return NULL;
    }
};