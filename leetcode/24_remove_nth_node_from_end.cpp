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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode* temp = head;
        ListNode* next=NULL;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        temp=head;
        // from start
        int pos=count-n+1;
        
        if(pos==1){
            head=temp->next;
            return head;
        }
        for(int i=1;i<pos-1;i++){
            temp=temp->next;
        }
        next=temp->next->next;
        delete(temp->next);
        temp->next=next;
        return head;
    }
};
