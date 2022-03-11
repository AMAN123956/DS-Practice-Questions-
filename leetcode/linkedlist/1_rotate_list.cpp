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
    void reverseArray(vector<int> &nums, int start,
                            int end)
{
    while (start < end)
    {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}
 
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return NULL;
        vector<int> nums;
        ListNode* curr=head;
        while(curr!=NULL){
            nums.push_back(curr->val);
            curr=curr->next;
        }
        int size=nums.size();
        rightRotate(nums,k,size);
    
      return rotateList(nums,k,head,size);
        
    }
    void rightRotate(vector<int> &nums, int d, int n)
{
    // if in case d>n,this will give segmentation fault.
    d=d%n;
    reverseArray(nums, 0, n-1);
    reverseArray(nums, 0, d-1);
    reverseArray(nums, d, n-1);
}
 
    
    ListNode* rotateList(vector<int> nums,int k,ListNode* head,int size){
        ListNode* dummy = new ListNode(-1);
        dummy->next=head;
        ListNode* root = dummy;
        for(int i=0;i<size;i++){
           root->next= new ListNode(nums[i]);
            root=root->next;
        }
        return dummy->next;
    }
};
