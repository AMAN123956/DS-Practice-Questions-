/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* dummy = new Node(-1);
        Node* prev= dummy;
        unordered_map<Node*,Node*> mp;
        Node* curr = head;
        while(curr!=NULL){
            Node* temp=new Node(curr->val);
            prev->next=temp;
            mp[curr]=temp;
            prev=prev->next;
            curr=curr->next;
        }
        dummy=dummy->next;
        Node* c1=head;
        Node* c2=dummy;
        while(c1!=NULL){
            c2->random = (c1->random!=NULL ? mp[c1->random]: NULL);
            c1=c1->next;
            c2=c2->next;
        }
        return dummy;
    }
};
