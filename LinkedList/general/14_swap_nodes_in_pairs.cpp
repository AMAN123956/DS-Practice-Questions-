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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL) return head;       
        else{
            ListNode* dummy= new ListNode(-1);
            dummy->next=head;
            ListNode* curr=dummy;
            while(curr->next && curr->next->next){
                cout<<curr->next->val<<"\n";
                ListNode* first=curr->next;
                ListNode* second = curr->next->next;
                first->next=second->next;
                curr->next=second;
                curr->next->next=first;
                curr=first;
            }
            return dummy->next;
        }
    }
};
