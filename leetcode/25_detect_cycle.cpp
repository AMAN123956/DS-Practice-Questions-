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
    bool hasCycle(ListNode *head) {
        ListNode* slow_p=head;
        ListNode* fast_p=head;
        while(slow_p && fast_p && fast_p->next && fast_p->next->next){
            slow_p=slow_p->next;
            fast_p=fast_p->next->next;
            if(slow_p==fast_p) return true;
        }
        return false;
    }
};
