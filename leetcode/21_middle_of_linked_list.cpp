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
        ListNode* temp=head;
        ListNode* slow=head;
        ListNode* fast=head;
        int count=0;
        if(head==NULL || head->next==NULL) return head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(count%2!=0){
        while(fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
        }
        else{
            while(fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
            return slow->next;
        }
    }
};
