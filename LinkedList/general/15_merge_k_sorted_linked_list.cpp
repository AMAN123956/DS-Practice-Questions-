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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0) return NULL;
        int size = lists.size();
        priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>> q;
        for(int i=0;i<size;i++){
            ListNode* temp=lists[i];
            
            while(temp!=NULL){
                cout<<temp->val<<" ";
                q.push({temp->val,temp});
                temp=temp->next;
            }
        }
        ListNode* head = new ListNode(); // can also be called as dummy
        ListNode* curr = head; 
    
        while(q.size()!=0){
            curr->next=q.top().second;
            q.pop();
            curr=curr->next;
        }
        curr -> next = NULL; 
        head = head -> next; 
        return head;
    }
};
