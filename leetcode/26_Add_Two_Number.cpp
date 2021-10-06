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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res=new ListNode();
        ListNode* temp=res;
        int oc=0,sum=0,rem=0;
        while(l1!=NULL || l2!=NULL || oc){
            sum=0;
            if(l1!=NULL) {
            sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
            sum+=l2->val;
                l2=l2->next;
            }
            
        
            sum=sum+oc;
            rem=sum%10;
            oc=sum/10;
            ListNode* next=new ListNode(rem);
            temp->next=next;
            temp=temp->next;
        
        }
        return res->next;
    }
 private: 
};
