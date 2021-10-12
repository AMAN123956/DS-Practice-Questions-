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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        ListNode* curr=head;
        ListNode* next=NULL;
        if(head==NULL) return NULL;
        while(curr->next!=NULL){
            if(curr->val==curr->next->val){
                next=curr->next->next;
                delete(curr->next);
                curr->next=next;
            }
            else{
                curr=curr->next;
            }
        }
        return head;
    }
};
