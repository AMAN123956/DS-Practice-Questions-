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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL || head->next==NULL) return head;
        
        ListNode* less = new ListNode(-1);
        ListNode* more = new ListNode(-1);
        ListNode* ltail = less;
        ListNode* mtail = more;
        ListNode* curr=head;
        while(curr!=NULL){
            if(curr->val < x){
                ltail->next=curr;
                ltail=ltail->next;
            }
            else{
                mtail->next=curr;
                mtail=mtail->next;
            }
            curr=curr->next;
        }
        ltail->next=more->next;
        mtail->next=NULL;
        return less->next;
    }
};
