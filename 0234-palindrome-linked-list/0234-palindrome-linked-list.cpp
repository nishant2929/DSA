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
    bool isPalindrome(ListNode* head) {
        if(head==NULL){
            return 0;
        }
        stack<int> s;
        ListNode*end=head,*start=head;
        while(end!=NULL){
            s.push(end->val);
            end=end->next;
        }
        while(start!=NULL){
            if(start->val != s.top()){
                return 0;
            }
            start=start->next;
            s.pop();
        }
        return 1;
    }
};