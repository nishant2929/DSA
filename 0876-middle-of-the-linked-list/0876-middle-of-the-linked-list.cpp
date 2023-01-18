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
    ListNode* middleNode(ListNode* head) {
        int cnt=0;
        ListNode* curr = head;
        if(head==NULL)return head;
        while(curr!=NULL){
            cnt++;
            curr = curr-> next;
        }
        //cout<<cnt<<" ";
        if(cnt%2==0) cnt++;
        cnt = cnt/2;
        //cout<<ans;
        int ans=0;
        ListNode* cur=head;
        while(ans<cnt){
            ans++;
            cur= cur->next;
        }
        
        return cur;
    }
};