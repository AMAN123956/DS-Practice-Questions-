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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* dummy = new ListNode(-1);
        dummy->next=list1;
        ListNode* temp1=dummy;
        ListNode* temp2=dummy;
        for(int i=0;i<a;i++){
            temp1=temp1->next;
        }
        for(int i=0;i<=b+1;i++){
            temp2=temp2->next;
        }
        
        ListNode* dummy2 = new ListNode(-1);
        dummy2->next=list2;
        ListNode* curr=dummy2;
        while(curr->next!=NULL){
            // cout<<curr->val;
             curr=curr->next;
         }
        curr->next=temp2;
        
        temp1->next=list2;
        
        
        cout<<temp1->val;
        cout<<temp2->val;
        return dummy->next;
    }
};
