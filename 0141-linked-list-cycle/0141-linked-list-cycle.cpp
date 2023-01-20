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
    bool hasCycle(ListNode *head) {
        ListNode* one = head;
        ListNode* two = head;
        if(head==NULL || head->next ==NULL){
            return false;
        }
        while(two->next && two->next->next){
            one=one->next;
            two=two->next->next;
            //two+2;
            if(one==two){
                return true;
            }
        }
        return false;
    }
};