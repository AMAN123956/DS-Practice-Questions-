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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* one=headA;
        ListNode* two=headB;
        int s1=0;
        int s2=0;
        while(one!=NULL) {s1++;one=one->next;}
        
        while(two!=NULL) {s2++;two=two->next;}
        ListNode* slow=headA;
        ListNode* fast=headB;
        int delta=abs(s1-s2);
        if(s1>s2){
            for(int i=0;i<delta;i++){
                slow=slow->next;
            }
        }
        else{
            for(int i=0;i<delta;i++){
                fast=fast->next;
            }
        }
        
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return fast;
    }
};
