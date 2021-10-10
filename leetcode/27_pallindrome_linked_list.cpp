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
        ListNode* slow=head;
        ListNode* fast=head;
        bool res=true;
        while(slow && fast && fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* mid = slow;
        ListNode* nhead=mid->next;
        mid->next=NULL;
        nhead=reverse(nhead);
        ListNode* c1=head;
        ListNode* c2=nhead;
        while(c2!=NULL){
            if(c1->val!=c2->val) {res =  false;break;}
            c1=c1->next;
            c2=c2->next;
        }
        return res;
    }
 private:
    ListNode* reverse(ListNode* nhead){
        if(nhead==NULL) return nhead;
        ListNode* curr=nhead;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
};
